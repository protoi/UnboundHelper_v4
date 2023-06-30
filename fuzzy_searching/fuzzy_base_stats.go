package fuzzy_searching

import (
	"encoding/json"
	"fmt"
	"os"
	"unbound_helper_v4/utils"
)

type ScalemonStats struct {
	Hp       int `json:"Hp"`
	Attack   int `json:"Attack"`
	Defense  int `json:"Defense"`
	Spattack int `json:"Spattack"`
	Spdef    int `json:"Spdef"`
	Speed    int `json:"Speed"`
	Bst      int `json:"BST"`
}

type ReverseEggGroups struct {
	Pokemons utils.Set
}

// PokemonBaseStat is an encapsulation of a single pokemons base stat information
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

// RawPokemonBaseStat is an intermediate struct used for the deserialization of the raw json data
type RawPokemonBaseStat struct {
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

// PokemonStats
/* this is an encapsulation of multiple structs:

1. Stats: mapping of pokemon name to pokemon base stat:

2. ListOfAbilities: list of pokemon abilities (no repeats)

3. ListOfPokemonNames: list of pokemon names (no repeats)

4. ListOfEggGroups: list of egg groups (no repeats)

5. ListOfHeldItems: list of held items (no repeats)

6. filePath: uri for the pokemon stats json file

*/
type PokemonStats struct {
	Stats              *map[string]PokemonBaseStat
	ReverseEggGroups   *map[string]ReverseEggGroups
	ListOfAbilities    *[]string
	ListOfPokemonNames *[]string
	ListOfEggGroups    *[]string
	ListOfHeldItems    *[]string
	filePath           *string
}

// ReverseAbility is a struct with three fields, each being a set of strings(pokemon names)
type ReverseAbility struct {
	First  utils.Set
	Second utils.Set
	Hidden utils.Set
}

// ConvertToScalemon converts an actualPokemonBaseStat struct to scalemons version
func (ps PokemonBaseStat) ConvertToScalemon() PokemonBaseStat {

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

// InitPokemonStats acts as a constructor for PokemonStats
// performs preprocessing on the data and returns a struct and success status
func InitPokemonStats() (PokemonStats, bool) {
	statMap := make(map[string]PokemonBaseStat)
	reverseEggGroupsMap := make(map[string]ReverseEggGroups)
	var listOfPokemonNames, listOfAbilities, listOfHeldItems, listOfEggGroups = []string{}, []string{}, []string{}, []string{}

	path := "./data generation/temp/dataextractionnew/base_stats/base_stats.json"
	pokestat := PokemonStats{
		Stats:              &statMap,
		ReverseEggGroups:   &reverseEggGroupsMap,
		ListOfPokemonNames: &listOfPokemonNames,
		ListOfAbilities:    &listOfAbilities,
		ListOfEggGroups:    &listOfEggGroups,
		ListOfHeldItems:    &listOfHeldItems,
		filePath:           &path,
	}

	if status := pokestat.loadStats(); status == true {
		pokestat.eggGroupReverseMap()
		return pokestat, true
	}
	return PokemonStats{}, false
}

// loadStats performs deserialization
func (pokestat PokemonStats) loadStats() bool {

	// reading successful
	if file, err := os.ReadFile(*(pokestat.filePath)); err == nil {

		// deserializing successful

		tempRawStats := make(map[string]RawPokemonBaseStat)
		if err := json.Unmarshal(file, &tempRawStats); err == nil {

			pokemonNameSet := utils.InitSet()
			heldItemSet := utils.InitSet()
			abilitySet := utils.InitSet()
			eggGroupSet := utils.InitSet()

			for name, val := range tempRawStats {

				pokemonNameSet.Add(name)
				heldItemSet.AddList([]string{val.Item1, val.Item2})
				abilitySet.AddList([]string{val.Ability1, val.Ability2, val.HiddenAbility})
				eggGroupSet.AddList([]string{val.EggGroup1, val.EggGroup2})

				// TODO: ability -> name

				// TODO: item -> name

				// TODO: egg group -> name

				// name -> stats
				(*pokestat.Stats)[name] = PokemonBaseStat{
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

			*pokestat.ListOfPokemonNames = pokemonNameSet.ToList()
			*pokestat.ListOfAbilities = abilitySet.ToList()
			*pokestat.ListOfEggGroups = eggGroupSet.ToList()
			*pokestat.ListOfHeldItems = heldItemSet.ToList()

			return true
		}
	}
	return false
}

// GetStats fuzzy search pokemon name and returns its actual name, base stat, status
func (pokestat PokemonStats) GetStats(targetPokemon string) (string, PokemonBaseStat, bool) {
	// search for the Pokemon, if it does not exist return an empty struct and a false

	// fuzzy search for the pokemon name inside eggmove.listOfPokemons
	pokemonNameMatches := utils.FindClosestMatches(targetPokemon, *pokestat.ListOfPokemonNames)

	if len(pokemonNameMatches) == 0 {
		return "", PokemonBaseStat{}, false
	}

	if stats, found := (*pokestat.Stats)[pokemonNameMatches[0]]; found == true {
		return pokemonNameMatches[0], stats, true
	}

	return "", PokemonBaseStat{}, false
}

func (pokestat PokemonStats) eggGroupReverseMap() {
	//tempReverseMap := make(map[string]Set)

	for pokemonName, stats := range *(pokestat.Stats) {
		// pokemon name, group1 and group 2 available,
		// now set hashmap [group1] to empty set if nothing present
		// add pokemon name to group

		group1, group2 := stats.EggGroup1, stats.EggGroup2

		if _, found := (*pokestat.ReverseEggGroups)[group1]; found == false { // not present
			(*pokestat.ReverseEggGroups)[group1] = ReverseEggGroups{Pokemons: utils.InitSet()}
		}
		(*pokestat.ReverseEggGroups)[group1].Pokemons.Add(pokemonName)

		if _, found := (*pokestat.ReverseEggGroups)[group2]; found == false { // not present
			(*pokestat.ReverseEggGroups)[group2] = ReverseEggGroups{Pokemons: utils.InitSet()}
		}
		(*pokestat.ReverseEggGroups)[group2].Pokemons.Add(pokemonName)
	}
}

func (pokestat PokemonStats) ReverseGetEggGroups(targetEggGroup string) (string, []string, bool) {
	// search for the Pokemon, if it does not exist return an empty struct and a false

	// fuzzy search for the egg group name inside pokestat.ListOfEggGroups
	eggGroupMatches := utils.FindClosestMatches(targetEggGroup, *pokestat.ListOfEggGroups)

	if len(eggGroupMatches) == 0 {
		return "", []string{}, false
	}

	if stats, found := (*pokestat.ReverseEggGroups)[eggGroupMatches[0]]; found == true {
		return eggGroupMatches[0], stats.Pokemons.ToList(), true
	}

	return "", []string{}, false
}

func Test_fuzzy_base_stats() {
	if bs, status := InitPokemonStats(); status == true {

		a, b, c := bs.GetStats("gastly")
		fmt.Println(a, b, c, "\n\n")
		a, b, c = bs.GetStats("char mandr")
		fmt.Println(a, b, c, "\n\n")
		a, b, c = bs.GetStats("sudowodo")
		fmt.Println(a, b, c, "\n\n")
		a, b, c = bs.GetStats("spectrier")
		fmt.Println(a, b, c, "\n\n")
		a, b, c = bs.GetStats("mega rayquza")
		fmt.Println(a, b, c, "\n\n")

		x, y, z := bs.ReverseGetEggGroups("water 2")
		fmt.Println(x, y, z, "\n\n")
		x, y, z = bs.ReverseGetEggGroups("fiel D")
		fmt.Println(x, y, z, "\n\n")
		x, y, z = bs.ReverseGetEggGroups("fie l d")
		fmt.Println(x, y, z, "\n\n")
		x, y, z = bs.ReverseGetEggGroups("human like")
		fmt.Println(x, y, z, "\n\n")
	}
}

func WriteScalemonsData() {

	data := make(map[string]ScalemonStats)
	if bs, status := InitPokemonStats(); status == true {
		for key, val := range *bs.Stats {
			scaleVal := val.ConvertToScalemon()
			temp := ScalemonStats{
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
