package main

import (
	"context"
	"log"
	"unbound_helper_v4/data_loading"
	"unbound_helper_v4/discord_commands"

	"github.com/diamondburned/arikawa/v3/api"
	"github.com/diamondburned/arikawa/v3/api/cmdroute"
	"github.com/diamondburned/arikawa/v3/discord"
	"github.com/diamondburned/arikawa/v3/gateway"
	"github.com/diamondburned/arikawa/v3/session"
	"github.com/diamondburned/arikawa/v3/state"
)

var (
	config         = get_config()
	prefix         = ";"
	slash_commands = []api.CreateCommandData{
		{
			Name:        "stats",
			Description: "search for the stats for any pokemon",
			Options: []discord.CommandOption{
				&discord.StringOption{
					OptionName:   "pokemon",
					Description:  "the name of the pokemon you want to search for",
					Required:     true,
					Autocomplete: true,
				},
			},
		},
	}
	// we want our session to be global so normal commands
	// can access it, to send messages to discord
	s *session.Session
)

func main() {
	// loading the base stats json file into memory
	data_loading.LoadBaseStats()
	// creating a new router for handling interactions
	r := cmdroute.NewRouter()
	// adding functions to handle completed slash commands
	r.AddFunc("stats", discord_commands.SlashStats)

	// creating a new state for the bot
	bs := state.New("Bot " + config.token)
	// adding intents to the bot
	bs.AddIntents(gateway.IntentGuilds)
	bs.AddIntents(gateway.IntentGuildMessages)
	// adding the router as a interaction (slash commands) handler
	bs.AddInteractionHandler(r)
	s = bs.Session

	// adding a handler for when the bot connects to the gateway, so we can see when the bot is actually online
	bs.AddHandler(func(*gateway.ReadyEvent) {
		me, _ := bs.Session.Me()
		log.Println("Connected to the gateway as", me.Tag())
	})

	// adding the handler for auto completions (obviously)
	bs.AddHandler(HandleAutoCompletions)
	// overwrite the slash commands we had before the bot started this time
	if err := cmdroute.OverwriteCommands(bs, slash_commands); err != nil {
		log.Fatalln("cannot update commands:", err)
	}
	// stay connected until we shut down the program
	if err := bs.Connect(context.TODO()); err != nil {
		log.Fatalln("cannot connect:", err)
	}
}
