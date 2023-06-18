package main

import (
	"github.com/diamondburned/arikawa/v3/gateway"
	"github.com/diamondburned/arikawa/v3/session"
)

type Command struct {
	names        []string
	command_func func(*session.Session, *gateway.MessageCreateEvent, []string)
	help_message string
	syntax       string
}

// TODO: decide how to differentiate between a required and optional argument
// Currently using <> for optional and [] for required, see first command in list
var (
	command_list = []Command{
		{
			[]string{"stats", "stat"},
			func(s1 *session.Session, mce *gateway.MessageCreateEvent, s2 []string) {},
			`Displays the stats of the specified Pokemon.`,
			`;stats <scalemon> [Pokemon Name]`,
		},
	}
)
