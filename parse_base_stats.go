package main

import (
	"encoding/json"
	"fmt"
	"os"
	"regexp"
	"strings"
)

type PokemonBaseStat struct {
	Name               string
	HP                 int
	Attack             int
	Defense            int
	SpAttack           int
	SpDef              int
	Speed              int
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

var (
	BASE_STATS_PATH = "./data generation/temp/dataextractionnew/base_stats/base_stats.json"
)

func fixMap(rawPokemonBaseStat *map[string]rawPokemonBaseStat, PokemonBaseStatMapping *map[string]PokemonBaseStat) {
	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")

	for key, val := range *rawPokemonBaseStat {
		// turn all names to lower case && remove characters other than alphabets and digits
		fixedName := strings.ToLower(stringNormalizer.ReplaceAllString(key, ""))
		(*PokemonBaseStatMapping)[fixedName] = PokemonBaseStat{
			Name:               key,
			HP:                 val.HP,
			Attack:             val.Attack,
			Defense:            val.Defense,
			SpAttack:           val.SpAttack,
			SpDef:              val.SpDef,
			Speed:              val.Speed,
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
}
func parseBaseStats() bool {

	rawPokemonBaseStatMapping := make(map[string]rawPokemonBaseStat)
	PokemonBaseStatMapping := make(map[string]PokemonBaseStat)

	// reading file successful
	if file, err := os.ReadFile(BASE_STATS_PATH); err == nil {

		// parsing file successful
		if err := json.Unmarshal(file, &rawPokemonBaseStatMapping); err == nil {
			// now fix the strings
			fmt.Println(rawPokemonBaseStatMapping["Charmander"])
			fixMap(&rawPokemonBaseStatMapping, &PokemonBaseStatMapping)

			fmt.Println(PokemonBaseStatMapping["ribombee"])
			fmt.Println(PokemonBaseStatMapping["mrmime"])
			fmt.Println(PokemonBaseStatMapping["hooh"])
			fmt.Println(PokemonBaseStatMapping["porygonz"])
			return true
		}
	}
	return false
}
