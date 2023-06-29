package main

import (
	"encoding/json"
	"fmt"
	"os"
)

type scalemonstats struct {
	Hp       int `json:"Hp"`
	Attack   int `json:"Attack"`
	Defense  int `json:"Defense"`
	Spattack int `json:"Spattack"`
	Spdef    int `json:"Spdef"`
	Speed    int `json:"Speed"`
	Bst      int `json:"BST"`
}

type PokemonBaseStat struct {
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
	stats              *map[string]PokemonBaseStat
	listOfAbilities    *[]string
	listOfPokemonNames *[]string
	listOfEggGroups    *[]string
	listOfHeldItems    *[]string
	filePath           *string
}

type reverseAbility struct {
	first  Set
	second Set
	hidden Set
}

// converts an actualPokemonBaseStat struct to scalemons version
func (ps PokemonBaseStat) convertToScalemon() PokemonBaseStat {

	// ignore shedinja
	if ps.HP == 1 {
		return ps
	}
	scalingFactor := float64(600-ps.HP) / float64(ps.BST-ps.HP)
	scaledAttack := scalingFactor * float64(ps.Attack)
	scaledDefense := scalingFactor * float64(ps.Defense)
	scaledSpAttack := scalingFactor * float64(ps.SpAttack)
	scaledSpDef := scalingFactor * float64(ps.SpDef)
	scaledSpeed := scalingFactor * float64(ps.Speed)

	return PokemonBaseStat{
		HP:                 ps.HP,
		Attack:             int(scaledAttack),
		Defense:            int(scaledDefense),
		SpAttack:           int(scaledSpAttack),
		SpDef:              int(scaledSpDef),
		Speed:              int(scaledSpeed),
		BST:                int(float64(ps.HP) + scaledAttack + scaledDefense + scaledSpAttack + scaledSpDef + scaledSpeed),
		Type1:              ps.Type1,
		Type2:              ps.Type2,
		CatchRate:          ps.CatchRate,
		ExpYield:           ps.ExpYield,
		Ev_yieldHP:         ps.Ev_yieldHP,
		Ev_yieldAttack:     ps.Ev_yieldAttack,
		Ev_yieldDefense:    ps.Ev_yieldDefense,
		Ev_yieldSpAttack:   ps.Ev_yieldSpAttack,
		Ev_yieldSpDef:      ps.Ev_yieldSpDef,
		Ev_yieldSpeed:      ps.Ev_yieldSpeed,
		Item1:              ps.Item1,
		Item2:              ps.Item2,
		GenderRatio:        ps.GenderRatio,
		EggCycles:          ps.EggCycles,
		Friendship:         ps.Friendship,
		GrowthRate:         ps.GrowthRate,
		EggGroup1:          ps.EggGroup1,
		EggGroup2:          ps.EggGroup2,
		Ability1:           ps.Ability1,
		Ability2:           ps.Ability2,
		HiddenAbility:      ps.HiddenAbility,
		SafariZoneFleeRate: ps.SafariZoneFleeRate,
	}
}

func initPokemonStats() (PokemonStats, bool) {
	statMap := make(map[string]PokemonBaseStat)
	var listOfPokemonNames, listOfAbilities, listOfHeldItems, listOfEggGroups = []string{}, []string{}, []string{}, []string{}
	path := "./data generation/temp/dataextractionnew/base_stats/base_stats.json"
	pokestat := PokemonStats{
		stats:              &statMap,
		listOfPokemonNames: &listOfPokemonNames,
		listOfAbilities:    &listOfAbilities,
		listOfEggGroups:    &listOfEggGroups,
		listOfHeldItems:    &listOfHeldItems,
		filePath:           &path,
	}

	if status := pokestat.loadStats(); status == true {
		return pokestat, true
	}
	return PokemonStats{}, false
}

func (pokestat PokemonStats) loadStats() bool {

	// reading successful
	if file, err := os.ReadFile(*(pokestat.filePath)); err == nil {

		// deserializing successful

		tempRawStats := make(map[string]rawPokemonBaseStat)
		if err := json.Unmarshal(file, &tempRawStats); err == nil {

			pokemonNameSet := initSet()
			heldItemSet := initSet()
			abilitySet := initSet()
			eggGroupSet := initSet()

			for name, val := range tempRawStats {

				pokemonNameSet.add(name)
				heldItemSet.addList([]string{val.Item1, val.Item2})
				abilitySet.addList([]string{val.Ability1, val.Ability2, val.HiddenAbility})
				eggGroupSet.addList([]string{val.EggGroup1, val.EggGroup2})

				// TODO: ability -> name

				// TODO: item -> name

				// TODO: egg group -> name

				// name -> stats
				(*pokestat.stats)[name] = PokemonBaseStat{
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

			*pokestat.listOfPokemonNames = pokemonNameSet.toList()
			*pokestat.listOfAbilities = abilitySet.toList()
			*pokestat.listOfEggGroups = eggGroupSet.toList()
			*pokestat.listOfHeldItems = heldItemSet.toList()

			return true
		}
	}
	return false
}

func (pokestat PokemonStats) getStats(targetPokemon string) (string, PokemonBaseStat, bool) {
	// search for the Pokemon, if it does not exist return an empty struct and a false

	// fuzzy search for the pokemon name inside eggmove.listOfPokemons
	pokemonNameMatches := FindClosestMatches(targetPokemon, *pokestat.listOfPokemonNames)

	if len(pokemonNameMatches) == 0 {
		return "", PokemonBaseStat{}, false
	}

	if stats, found := (*pokestat.stats)[pokemonNameMatches[0]]; found == true {
		return pokemonNameMatches[0], stats, true
	}

	return "", PokemonBaseStat{}, false
}

func test_fuzzy_base_stats() {
	if bs, status := initPokemonStats(); status == true {

		a, b, c := bs.getStats("gastly")
		fmt.Println(a, b, c)
		a, b, c = bs.getStats("char mandr")
		fmt.Println(a, b, c)
		a, b, c = bs.getStats("sudowodo")
		fmt.Println(a, b, c)
		a, b, c = bs.getStats("spectrier")
		fmt.Println(a, b, c)
		a, b, c = bs.getStats("mega rayquza")
		fmt.Println(a, b, c)
	}
}

func writeScalemonsData() {

	data := make(map[string]scalemonstats)
	if bs, status := initPokemonStats(); status == true {
		for key, val := range *bs.stats {
			scaleVal := val.convertToScalemon()
			temp := scalemonstats{
				Hp:       scaleVal.HP,
				Attack:   scaleVal.Attack,
				Defense:  scaleVal.Defense,
				Spattack: scaleVal.SpAttack,
				Spdef:    scaleVal.SpDef,
				Speed:    scaleVal.Speed,
				Bst:      scaleVal.BST,
			}

			data[key] = temp
		}
	}

	jsonData, _ := json.MarshalIndent(data, "", " ")

	// thank you chatGPT

	// Create a file to write the JSON data
	file, err := os.Create("./scalemons_data.json")
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	defer func(file *os.File) {
		err := file.Close()
		if err != nil {
			fmt.Println("oh no !!!!!!")
		}
	}(file)

	// Write the JSON data to the file
	_, err = file.Write(jsonData)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
}
