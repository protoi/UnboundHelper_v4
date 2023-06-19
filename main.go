package main

import (
	"context"
	"fmt"
	"log"
	"strings"
	"unbound_helper_v4/data_loading"

	//"unbound_helper_v4/discord_commands"

	"github.com/diamondburned/arikawa/v3/api"
	"github.com/diamondburned/arikawa/v3/api/cmdroute"
	"github.com/diamondburned/arikawa/v3/discord"
	"github.com/diamondburned/arikawa/v3/gateway"
	"github.com/diamondburned/arikawa/v3/session"
	"github.com/diamondburned/arikawa/v3/state"
	"github.com/diamondburned/arikawa/v3/utils/json/option"
)

var (
	config         = get_config()
	prefix         = ";"
	slash_commands = []api.CreateCommandData{
		{
			Name:        "ping",
			Description: "ping pong!",
			Options: []discord.CommandOption{
				&discord.StringOption{
					OptionName:   "something",
					Description:  "something",
					Autocomplete: true,
				},
			},
		},
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
	s *session.Session
)

func main() {
	data_loading.LoadBaseStats()
	r := cmdroute.NewRouter()
	r.AddFunc("stats", func(ctx context.Context, data cmdroute.CommandData) *api.InteractionResponseData {
		var options struct {
			Arg string `discord:"pokemon"`
		}
		data.Options.Unmarshal(&options)
		pokemon_data := data_loading.GetStats(strings.TrimSpace(options.Arg))

		return &api.InteractionResponseData{Content: option.NewNullableString(fmt.Sprintf("%v", pokemon_data))}
	})
	r.AddFunc("ping", func(ctx context.Context, data cmdroute.CommandData) *api.InteractionResponseData {
		return &api.InteractionResponseData{Content: option.NewNullableString("Pong!")}
	})

	bs := state.New("Bot " + config.token)
	bs.AddInteractionHandler(r)
	bs.AddIntents(gateway.IntentGuilds)
	bs.AddIntents(gateway.IntentGuildMessages)
	s = bs.Session

	bs.AddHandler(func(*gateway.ReadyEvent) {
		me, _ := bs.Session.Me()
		log.Println("Connected to the gateway as", me.Tag())
	})

	bs.AddHandler(HandleAutoCompletions)

	if err := cmdroute.OverwriteCommands(bs, slash_commands); err != nil {
		log.Fatalln("cannot update commands:", err)
	}

	if err := bs.Connect(context.TODO()); err != nil {
		log.Fatalln("cannot connect:", err)
	}
}

func HandleAutoCompletions(e *gateway.InteractionCreateEvent) {
	var resp api.InteractionResponse
	switch d := e.Data.(type) {
	case *discord.AutocompleteInteraction:
		var allChoices api.AutocompleteStringChoices
		if d.Options.Focused().Name == "pokemon" {
			for k := range data_loading.PokeStats {
				allChoices = append(allChoices, discord.StringChoice{Name: k})
			}

		}
		query := strings.ToLower(d.Options[0].String())
		var choices api.AutocompleteStringChoices
		for _, choice := range allChoices {
			if strings.HasPrefix(strings.ToLower(choice.Name), query) ||
				strings.HasPrefix(strings.ToLower(choice.Value), query) {
				choices = append(choices, choice)
			}
		}
		resp = api.InteractionResponse{
			Type: api.AutocompleteResult,
			Data: &api.InteractionResponseData{
				Choices: &choices,
			},
		}
	default:
		return
	}

	if err := s.RespondInteraction(e.ID, e.Token, resp); err != nil {
		log.Println("failed to send interaction callback:", err)
	}
}
