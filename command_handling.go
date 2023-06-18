package main

import (
	"strings"

	"github.com/diamondburned/arikawa/v3/gateway"
)

func contains(dict []string, index string) bool {
	for _, val := range dict {
		if val == index {
			return true
		}
	}

	return false
}

// checks if a message is a command, if not it returns, if so parse the command
func handle_message(c *gateway.MessageCreateEvent) {
	// if the author of the message is the bot then return, because the bot cant use its own commands, duh.
	me, _ := s.Me()
	if me.ID == c.Author.ID {
		return
	}
	message := strings.ToLower(c.Content)
	// checking if the message is prefixed with the bot prefix
	message, found := strings.CutPrefix(message, prefix)
	if !found {
		return
	}

	// Splitting all the words in the message, to determine the command and args
	words_in_message := strings.Fields(message)

	// Checking the command
	command := words_in_message[0]
	args := words_in_message[1:]

	handle_command(c, command, args)
}

func handle_command(mce *gateway.MessageCreateEvent, command string, args []string) {
	for i := 0; i < len(command_list); i++ {
		if contains(command_list[i].names, strings.ToLower(command)) {
			command_list[i].command_func(s, mce, args)
			return
		}
	}
	s.SendTextReply(mce.ChannelID, "Could not find command.", mce.Message.ID)
}
