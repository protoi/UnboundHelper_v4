package main

import (
	"encoding/json"
	"fmt"
	"os"
	"regexp"
	"strings"
)

type actualPokemonBaseStat struct {
	Name               string
	HP                 int
	Attack             int
	Defense            int
	SpAttack           int
	SpDef              int
	Speed              int
	BST                int
	Type1              string
	Type2              string
	CatchRate          int
	ExpYield           int
	Ev_yieldHP         int
	Ev_yieldAttack     int
	Ev_yieldDefense    int
	Ev_yieldSpAttack   int
	Ev_yieldSpDef      int
	Ev_yieldSpeed      int
	Item1              string
	Item2              string
	GenderRatio        int
	EggCycles          int
	Friendship         int
	GrowthRate         string
	EggGroup1          string
	EggGroup2          string
	Ability1           string
	Ability2           string
	HiddenAbility      string
	SafariZoneFleeRate int
}

type rawPokemonBaseStat struct {
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

type PokemonStats struct {
	stats    *map[string]actualPokemonBaseStat
	rawStats *map[string]rawPokemonBaseStat
	filePath *string
}

func initPokemonStats() (PokemonStats, bool) {
	statMap := make(map[string]actualPokemonBaseStat)
	rawMap := make(map[string]rawPokemonBaseStat)
	path := "./data generation/temp/dataextractionnew/base_stats/base_stats.json"
	pokestat := PokemonStats{
		stats:    &statMap,
		rawStats: &rawMap,
		filePath: &path,
	}

	if status := pokestat.loadStats(); status == true {
		pokestat.fixMap()
		return pokestat, true
	}
	return PokemonStats{}, false
}

func (pokestat PokemonStats) loadStats() bool {

	// reading successful
	if file, err := os.ReadFile(*(pokestat.filePath)); err == nil {

		// deserializing successful
		if err := json.Unmarshal(file, pokestat.rawStats); err == nil {
			return true
		}
	}
	return false
}

func (pokestat PokemonStats) fixMap() {

	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")

	for key, val := range *(pokestat.rawStats) {
		// turn all names to lower case && remove characters other than alphabets and digits
		fixedName := strings.ToLower(stringNormalizer.ReplaceAllString(key, ""))

		fmt.Println(key)
		(*pokestat.stats)[fixedName] = actualPokemonBaseStat{
			Name:               key,
			HP:                 val.HP,
			Attack:             val.Attack,
			Defense:            val.Defense,
			SpAttack:           val.SpAttack,
			SpDef:              val.SpDef,
			Speed:              val.Speed,
			BST:                val.HP + val.Attack + val.Defense + val.SpAttack + val.SpDef + val.Speed,
			Type1:              val.Type1,
			Type2:              val.Type2,
			CatchRate:          val.CatchRate,
			ExpYield:           val.ExpYield,
			Ev_yieldHP:         val.Ev_yieldHP,
			Ev_yieldAttack:     val.Ev_yieldAttack,
			Ev_yieldDefense:    val.Ev_yieldDefense,
			Ev_yieldSpAttack:   val.Ev_yieldSpAttack,
			Ev_yieldSpDef:      val.Ev_yieldSpDef,
			Ev_yieldSpeed:      val.Ev_yieldSpeed,
			Item1:              val.Item1,
			Item2:              val.Item2,
			GenderRatio:        val.GenderRatio,
			EggCycles:          val.EggCycles,
			Friendship:         val.Friendship,
			GrowthRate:         val.GrowthRate,
			EggGroup1:          val.EggGroup1,
			EggGroup2:          val.EggGroup2,
			Ability1:           val.Ability1,
			Ability2:           val.Ability2,
			HiddenAbility:      val.HiddenAbility,
			SafariZoneFleeRate: val.SafariZoneFleeRate,
		}
	}

	for key, val := range *(pokestat.stats) {
		// turn all names to lower case && remove characters other than alphabets and digits
		fmt.Println("pokemon name -> ", key, "BST -> ", val.BST)
	}
}

func (pokestat PokemonStats) getInfo(targetPokemon string) (actualPokemonBaseStat, bool) {
	// search for the Pokemon, if it does not exist return an empty struct and a false
	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")
	normalizedTarget := strings.ToLower(stringNormalizer.ReplaceAllString(targetPokemon, ""))

	if pokemonInfo, found := (*pokestat.stats)[normalizedTarget]; found == true {
		return pokemonInfo, true
	}
	return actualPokemonBaseStat{}, false
}
