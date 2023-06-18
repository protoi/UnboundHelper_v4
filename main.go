package main

import (
	"context"
	"encoding/json"
	"log"
	"os"
	"strings"

	"github.com/diamondburned/arikawa/v3/gateway"
	"github.com/diamondburned/arikawa/v3/session"
)

var (
	config     = get_config()
	prefix     = ";"
	poke_stats map[string]interface{}
	s          *session.Session
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

	// loading base_stats.json
	file, err := os.ReadFile("./data/base_stats.json")
	json.Unmarshal(file, &poke_stats)

	// checking if we can get Charizard's data to verify the json is compatible
	if _, ok := poke_stats["Charizard"]; !ok {
		log.Println("WARNING: Could not get Pokemon Stats file.")
	}

	log.Println("Started as", me.Username)

	// Block forever, so the program doesnt close.
	select {}
}
