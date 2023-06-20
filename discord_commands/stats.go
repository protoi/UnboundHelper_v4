package discord_commands

import (
	"context"
	"fmt"
	"strings"
	"unbound_helper_v4/data_loading"

	"github.com/diamondburned/arikawa/v3/api"
	"github.com/diamondburned/arikawa/v3/api/cmdroute"
	"github.com/diamondburned/arikawa/v3/gateway"
	"github.com/diamondburned/arikawa/v3/session"
	"github.com/diamondburned/arikawa/v3/utils/json/option"
)

func Stats(s *session.Session, mce *gateway.MessageCreateEvent, args []string) {

}

func SlashStats(ctx context.Context, data cmdroute.CommandData) *api.InteractionResponseData {
	var options struct {
		Arg string `discord:"pokemon"`
	}
	data.Options.Unmarshal(&options)
	pokemon_data := data_loading.GetStats(strings.TrimSpace(options.Arg))

	return &api.InteractionResponseData{Content: option.NewNullableString(fmt.Sprintf("%v", pokemon_data))}
}
