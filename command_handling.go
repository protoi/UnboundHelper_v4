package main

import (
	"log"
	"strings"
	"unbound_helper_v4/data_loading"
	"unbound_helper_v4/discord_commands"

	"github.com/diamondburned/arikawa/v3/api"
	"github.com/diamondburned/arikawa/v3/discord"
	"github.com/diamondburned/arikawa/v3/gateway"
	"github.com/lithammer/fuzzysearch/fuzzy"
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
func HandleMessage(c *gateway.MessageCreateEvent) {
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

	HandleCommand(c, command, args)
}

func HandleCommand(mce *gateway.MessageCreateEvent, command string, args []string) {
	for i := 0; i < len(command_list); i++ {
		if contains(command_list[i].names, strings.ToLower(command)) {
			command_list[i].command_func(s, mce, args)
			return
		}
	}
	s.SendTextReply(mce.ChannelID, "Could not find command.", mce.Message.ID)
}

func HandleInteractions(e *gateway.InteractionCreateEvent) {
	var resp api.InteractionResponse
	switch d := e.Data.(type) {
	case *discord.CommandInteraction:
		if d.Name == "stats" {
			emb := discord_commands.SlashStats(d.Options[0].String())
			resp = api.InteractionResponse{
				Type: api.MessageInteractionWithSource,
				Data: &api.InteractionResponseData{
					Embeds: emb,
				},
			}
		}
	case *discord.AutocompleteInteraction:
		// getting the first word of the arguments the user is giving
		query := strings.ToLower(d.Options[0].String())
		var allChoices api.AutocompleteStringChoices

		// If the argument the current user is filling out is called "pokemon"
		// like in the arguments for /stats or /moves
		if d.Options.Focused().Name == "pokemon" {
			var name_list []string
			for k := range data_loading.PokeStats {
				name_list = append(name_list, k)
				name_list = fuzzy.FindFold(query, name_list)
			}
			for _, v := range name_list {
				allChoices = append(allChoices, discord.StringChoice{Name: v, Value: v})
			}
		}

		// Sends the first 25 elements from the list allChoices
		var choices api.AutocompleteStringChoices
		i := 0
		for _, choice := range allChoices {
			i++
			if i <= 25 {
				if strings.HasPrefix(strings.ToLower(choice.Name), query) ||
					strings.HasPrefix(strings.ToLower(choice.Value), query) {
					choices = append(choices, choice)
				}
			}
		}
		// setting the data we're sending back to discord
		resp = api.InteractionResponse{
			Type: api.AutocompleteResult,
			Data: &api.InteractionResponseData{
				Choices: &choices,
			},
		}
	default:
		return
	}
	// sending back the data we set to discord
	if err := s.RespondInteraction(e.ID, e.Token, resp); err != nil {
		log.Println("failed to send interaction callback:", err)
	}
}
