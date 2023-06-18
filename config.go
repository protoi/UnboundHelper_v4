package main

import (
	"log"

	"github.com/spf13/viper"
)

type Config struct {
	token string
}

func get_config() Config {
	viper.SetConfigName("config")
	viper.AddConfigPath("./")
	err := viper.ReadInConfig()
	if err != nil {
		log.Fatalln("ERROR: could not read config.json")
	}
	var config Config
	config.token = viper.GetString("token")
	return config
}
