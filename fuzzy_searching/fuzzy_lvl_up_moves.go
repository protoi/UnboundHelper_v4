package fuzzy_searching

import (
	"encoding/json"
	"fmt"
	"os"
	"strings"
	"unbound_helper_v4/utils"
)

// a tuple of level and move
type LevelMoveTuple struct {
	Level int    `json:"level"`
	Move  string `json:"move"`
}

// a list of such tuples
type MoveList []LevelMoveTuple

// pokemon name + list of tuple
type LvlUpMoves struct {
	MoveList MoveList
}

type ReverseLvlUpMoves struct {
	Pokemons utils.Set
}

type PokemonLvlUpMoves struct {
	lvlUpMoves         *map[string]LvlUpMoves
	reverseLvlUpMoves  *map[string]ReverseLvlUpMoves
	listOfPokemonNames *[]string
	listOfLvlUpMoves   *[]string
	filePath           *string
}

func InitPokemonLevelUpMoves() (PokemonLvlUpMoves, bool) {
	levelUpMap := make(map[string]LvlUpMoves)
	revLevelUpMap := make(map[string]ReverseLvlUpMoves)
	var (
		listOfPokemonNames, listOfLvlUpMoves = []string{}, []string{}
	)

	path := "./data generation/temp/dataextractionnew/levelup_moves/level_up_learnset.json"

	levelup := PokemonLvlUpMoves{
		lvlUpMoves:         &levelUpMap,
		reverseLvlUpMoves:  &revLevelUpMap,
		listOfPokemonNames: &listOfPokemonNames,
		listOfLvlUpMoves:   &listOfLvlUpMoves,
		filePath:           &path,
	}

	if status := levelup.loadLevelUpMoves(); status == true {
		levelup.reverseMap()
		return levelup, true
	}
	return PokemonLvlUpMoves{}, false
}

func (levelup PokemonLvlUpMoves) loadLevelUpMoves() bool {

	// reading successful
	if file, err := os.ReadFile(*(levelup.filePath)); err == nil {
		tempLvlUpMoves := make(map[string]MoveList)
		// deserializing successful
		if err := json.Unmarshal(file, &tempLvlUpMoves); err == nil {

			pokemonNameSet := utils.InitSet()
			lvlUpMoveSet := utils.InitSet()

			for name, val := range tempLvlUpMoves {
				// turn all names to lower case && remove characters other than alphabets and digits
				pokemonNameSet.Add(name)

				// add the name of the move to the set
				for _, tuple := range val {
					lvlUpMoveSet.Add(tuple.Move)
				}

				(*levelup.lvlUpMoves)[name] = LvlUpMoves{
					MoveList: val,
				}
			}
			*levelup.listOfPokemonNames = pokemonNameSet.ToList()
			*levelup.listOfLvlUpMoves = lvlUpMoveSet.ToList()

			return true
		}
	}
	return false
}

func (levelup PokemonLvlUpMoves) reverseMap() {

	//tempReverseMap := make(map[string]Set)

	// convert A -> [1,2] | B -> [1,2,4] ==> 1 -> {A,B} | 2 -> {A,B} | 4 -> {B}
	for pokemonName, moveList := range *(levelup.lvlUpMoves) {
		for _, tuple := range moveList.MoveList {
			// if lvl up move name not present, set it to an empty set

			var (
				moveName = tuple.Move
			)

			// first time seeing this lvl u move
			if _, found := (*levelup.reverseLvlUpMoves)[moveName]; found != true {
				//pokemonNameSet := make(map[string]struct{})
				(*levelup.reverseLvlUpMoves)[moveName] = ReverseLvlUpMoves{Pokemons: utils.InitSet()} // Set{members: &pokemonNameSet}
			}
			// now add the pokemon name to the set
			(*levelup.reverseLvlUpMoves)[moveName].Pokemons.Add(pokemonName)
		}
	}
}

func (levelup PokemonLvlUpMoves) GetLvlUpMoves(targetPokemon string) (string, LvlUpMoves, bool) {

	// fuzzy search for the pokemon name inside eggmove.listOfPokemons
	//pokemonNameMatches := utils.FindClosestMatches(targetPokemon, *levelup.listOfPokemonNames)
	//if len(pokemonNameMatches) == 0 {
	//	return "", LvlUpMoves{}, false
	//}

	maxThresh := len(strings.TrimSpace(targetPokemon)) / 3
	pokemonNameMatches, status := utils.FindClosestString(targetPokemon, *levelup.listOfLvlUpMoves, maxThresh)
	if !status {
		return "", LvlUpMoves{}, false
	}

	if moves, found := (*levelup.lvlUpMoves)[pokemonNameMatches]; found == true {
		return pokemonNameMatches, moves, true
	}

	return "", LvlUpMoves{}, false
}

func (levelup PokemonLvlUpMoves) ReverseGetLvlUpMoves(targetLvlUpMove string) (string, []string, bool) {

	// fuzzy search for the pokemon name inside eggmove.listOfPokemons
	//pokemonLvlUpMoveMatches := utils.FindClosestMatches(targetLvlUpMove, *levelup.listOfLvlUpMoves)
	//if len(pokemonLvlUpMoveMatches) == 0 {
	//	return "", []string{}, false
	//}

	maxThresh := len(strings.TrimSpace(targetLvlUpMove)) / 3
	pokemonLvlUpMoveMatches, status := utils.FindClosestString(targetLvlUpMove, *levelup.listOfLvlUpMoves, maxThresh)
	if !status {
		return "", []string{}, false
	}

	if lvlup_move_set, found := (*levelup.reverseLvlUpMoves)[pokemonLvlUpMoveMatches]; found == true {
		return pokemonLvlUpMoveMatches, lvlup_move_set.Pokemons.ToList(), true
	}
	return "", []string{}, false
}

func Test_fuzzy_lvl_up_moves() {
	if lvl, status := InitPokemonLevelUpMoves(); status == true {
		fmt.Println("=========MOVES=========")
		a, b, c := lvl.GetLvlUpMoves("gasly")
		fmt.Println(a, b, c)
		a, b, c = lvl.GetLvlUpMoves("hauntr")
		fmt.Println(a, b, c)
		a, b, c = lvl.GetLvlUpMoves("gENGAr")
		fmt.Println(a, b, c)
		a, b, c = lvl.GetLvlUpMoves("dharmander")
		fmt.Println(a, b, c)
		a, b, c = lvl.GetLvlUpMoves("porygon 2")
		fmt.Println(a, b, c)
		a, b, c = lvl.GetLvlUpMoves("arceus wat")
		fmt.Println(a, b, c)
		a, b, c = lvl.GetLvlUpMoves("mewtwo")
		fmt.Println(a, b, c)
		a, b, c = lvl.GetLvlUpMoves("mew")
		fmt.Println(a, b, c)

		fmt.Println("=========LEARNERS=========")
		x, y, z := lvl.ReverseGetLvlUpMoves("flame thrower")
		fmt.Println(x, y, z)
		x, y, z = lvl.ReverseGetLvlUpMoves("thunder")
		fmt.Println(x, y, z)
		x, y, z = lvl.ReverseGetLvlUpMoves("earfquake")
		fmt.Println(x, y, z)
		x, y, z = lvl.ReverseGetLvlUpMoves("hypnosis")
		fmt.Println(x, y, z)
		x, y, z = lvl.ReverseGetLvlUpMoves("synchronoise")
		fmt.Println(x, y, z)
	}
}
