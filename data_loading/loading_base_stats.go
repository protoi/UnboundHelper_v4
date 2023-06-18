package data_loading

import (
	"encoding/json"
	"log"
	"os"
)

var (
	PokeStats map[string]PokemonBaseStat
)

type PokemonBaseStat struct {
	HP                 int    `json:"HP"`
	Attack             int    `json:"Attack"`
	Defense            int    `json:"Defense"`
	SpAttack           int    `json:"SpAttack"`
	SpDef              int    `json:"SpDef"`
	Speed              int    `json:"Speed"`
	Type1              string `json:"Type1"`
	Type2              string `json:"Type2"`
	CatchRate          int    `json:"CatchRate"`
	ExpYield           int    `json:"ExpYield"`
	Ev_yieldHP         int    `json:"ev_yieldHP"`
	Ev_yieldAttack     int    `json:"ev_yieldAttack"`
	Ev_yieldDefense    int    `json:"ev_yieldDefense"`
	Ev_yieldSpAttack   int    `json:"ev_yieldSpAttack"`
	Ev_yieldSpDef      int    `json:"ev_yieldSpDef"`
	Ev_yieldSpeed      int    `json:"ev_yieldSpeed"`
	Item1              string `json:"Item1"`
	Item2              string `json:"Item2"`
	GenderRatio        int    `json:"genderRatio"`
	EggCycles          int    `json:"eggCycles"`
	Friendship         int    `json:"friendship"`
	GrowthRate         string `json:"growthRate"`
	EggGroup1          string `json:"eggGroup1"`
	EggGroup2          string `json:"eggGroup2"`
	Ability1           string `json:"ability1"`
	Ability2           string `json:"ability2"`
	HiddenAbility      string `json:"hiddenAbility"`
	SafariZoneFleeRate int    `json:"safariZoneFleeRate"`
}

func LoadBaseStats() {

	// loading base_stats.json
	file, _ := os.ReadFile("./data/base_stats.json")
	json.Unmarshal(file, &PokeStats)

	// checking if we can get Charizard's data to verify the json is compatible
	if _, ok := PokeStats["Charizard"]; !ok {
		log.Println("WARNING: Could not get Pokemon Stats file.")
	}
}

func GetStats(pokemon string) PokemonBaseStat {
	// pokemon = strings.ToLower(pokemon)
	stats := PokeStats[pokemon]
	return stats
}
