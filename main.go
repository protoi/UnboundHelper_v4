package main

import (
	"context"
	"fmt"
	"log"
	"strings"
	"unbound_helper_v4/data_loading"

	"github.com/diamondburned/arikawa/v3/gateway"
	"github.com/diamondburned/arikawa/v3/session"
)

var (
	config = get_config()
	prefix = ";"
	s      *session.Session
)

func main() {
	// Getting and checking if the token is empty
	if strings.TrimSpace(config.token) == "" {
		log.Fatalln("No Token Provided.")
	}
	// Creating a new session.
	s = session.New("Bot " + config.token)
	if s == nil {
		log.Fatalln("Token Not Functional.")
	}
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

	// the reason we load the jsons in the main.go file is so we can have the data loaded before people
	// start using commands
	data_loading.LoadBaseStats()
	fmt.Println(GetStats("Mew"))

	log.Println("Started as", me.Username)

	// Block forever, so the program doesnt close.
	select {}
}
