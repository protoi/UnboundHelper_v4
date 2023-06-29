package config

import (
	"log"

	"github.com/spf13/viper"
)

var BotConfig = get_config()

type Config struct {
	Token string
	DefaultPrefix string
}

func get_config() Config {
	viper.SetConfigName("config")
	viper.AddConfigPath("./")
	err := viper.ReadInConfig()
	if err != nil {
		log.Fatalln("ERROR: could not read config.json")
	}
	var config Config
	config.Token = viper.GetString("token")
	config.DefaultPrefix = viper.GetString("prefix")
	return config
}
