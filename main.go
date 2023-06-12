package main

import (
	"context"
	"fmt"
	"log"
	"strings"

	"github.com/diamondburned/arikawa/v3/gateway"
	"github.com/diamondburned/arikawa/v3/session"
)

var (
	token  = ""
	prefix = ";"
)

func main() {
	// Getting and checking if the token is empty
	if strings.TrimSpace(token) == "" {
		log.Fatalln("No Token Provided.")
	}
	// Creating a new session.
	s := session.New("Bot " + token)
	// Adding a message handler
	s.AddHandler(handle_message)
	// Adding Intents
	s.AddIntents(gateway.IntentGuildMessages)
	s.AddIntents(gateway.IntentDirectMessages)
	// Connecting to Discord
	if err := s.Open(context.Background()); err != nil {
		log.Fatalln("Failed to connect:", err)
	}
	defer s.Close()

	// Getting the bot's user data
	me, err := s.Me()
	if err != nil {
		log.Fatalln("Failed to get myself:", err)
	}

	log.Println("Started as", me.Username)

	// Block forever, so the program doesnt close.
	select {}
}

// checks if a message is a command, if not it returns, if so parse the command
func handle_message(c *gateway.MessageCreateEvent) {
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
	// TODO: check if command exists
	fmt.Println(command, " ", args)
}
