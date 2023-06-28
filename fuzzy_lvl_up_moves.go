package main

import (
	"encoding/json"
	"fmt"
	"os"
)

// a tuple of level and move
type levelMoveTuple struct {
	Level int    `json:"level"`
	Move  string `json:"move"`
}

// a list of such tuples
type moveList []levelMoveTuple

// pokemon name + list of tuple
type LvlUpMoves struct {
	MoveList moveList
}

type ReverseLvlUpMoves struct {
	Pokemons Set
}

type PokemonLvlUpMoves struct {
	lvlUpMoves         *map[string]LvlUpMoves
	reverseLvlUpMoves  *map[string]ReverseLvlUpMoves
	listOfPokemonNames *[]string
	listOfLvlUpMoves   *[]string
	filePath           *string
}

func initPokemonLevelUpMoves() (PokemonLvlUpMoves, bool) {
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
		tempLvlUpMoves := make(map[string]moveList)
		// deserializing successful
		if err := json.Unmarshal(file, &tempLvlUpMoves); err == nil {

			pokemonNameSet := initSet()
			lvlUpMoveSet := initSet()

			for name, val := range tempLvlUpMoves {
				// turn all names to lower case && remove characters other than alphabets and digits
				pokemonNameSet.add(name)

				// add the name of the move to the set
				for _, tuple := range val {
					lvlUpMoveSet.add(tuple.Move)
				}

				(*levelup.lvlUpMoves)[name] = LvlUpMoves{
					MoveList: val,
				}
			}
			*levelup.listOfPokemonNames = pokemonNameSet.toList()
			*levelup.listOfLvlUpMoves = lvlUpMoveSet.toList()

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
				(*levelup.reverseLvlUpMoves)[moveName] = ReverseLvlUpMoves{Pokemons: initSet()} // Set{members: &pokemonNameSet}
			}
			// now add the pokemon name to the set
			(*levelup.reverseLvlUpMoves)[moveName].Pokemons.add(pokemonName)
		}
	}
}

func (levelup PokemonLvlUpMoves) getLvlUpMoves(targetPokemon string) (string, LvlUpMoves, bool) {

	// fuzzy search for the pokemon name inside eggmove.listOfPokemons
	pokemonNameMatches := FindClosestMatches(targetPokemon, *levelup.listOfPokemonNames)

	if len(pokemonNameMatches) == 0 {
		return "", LvlUpMoves{}, false
	}

	if moves, found := (*levelup.lvlUpMoves)[pokemonNameMatches[0]]; found == true {
		return pokemonNameMatches[0], moves, true
	}

	return "", LvlUpMoves{}, false
}

func (levelup PokemonLvlUpMoves) reverseGetLvlUpMoves(targetLvlUpMove string) (string, []string, bool) {

	// fuzzy search for the pokemon name inside eggmove.listOfPokemons
	pokemonLvlUpMoveMatches := FindClosestMatches(targetLvlUpMove, *levelup.listOfLvlUpMoves)

	if len(pokemonLvlUpMoveMatches) == 0 {
		return "", []string{}, false
	}

	if lvlup_move_set, found := (*levelup.reverseLvlUpMoves)[pokemonLvlUpMoveMatches[0]]; found == true {
		return pokemonLvlUpMoveMatches[0], lvlup_move_set.Pokemons.toList(), true
	}
	return "", []string{}, false
}

func test_fuzzy_lvl_up_moves() {
	if lvl, status := initPokemonLevelUpMoves(); status == true {
		fmt.Println("=========MOVES=========")
		a, b, c := lvl.getLvlUpMoves("gasly")
		fmt.Println(a, b, c)
		a, b, c = lvl.getLvlUpMoves("hauntr")
		fmt.Println(a, b, c)
		a, b, c = lvl.getLvlUpMoves("gENGAr")
		fmt.Println(a, b, c)
		a, b, c = lvl.getLvlUpMoves("dharmander")
		fmt.Println(a, b, c)
		a, b, c = lvl.getLvlUpMoves("porygon 2")
		fmt.Println(a, b, c)
		a, b, c = lvl.getLvlUpMoves("arceus wat")
		fmt.Println(a, b, c)
		a, b, c = lvl.getLvlUpMoves("mewtwo")
		fmt.Println(a, b, c)
		a, b, c = lvl.getLvlUpMoves("mew")
		fmt.Println(a, b, c)

		fmt.Println("=========LEARNERS=========")
		x, y, z := lvl.reverseGetLvlUpMoves("flame thrower")
		fmt.Println(x, y, z)
		x, y, z = lvl.reverseGetLvlUpMoves("thunder")
		fmt.Println(x, y, z)
		x, y, z = lvl.reverseGetLvlUpMoves("earfquake")
		fmt.Println(x, y, z)
		x, y, z = lvl.reverseGetLvlUpMoves("hypnosis")
		fmt.Println(x, y, z)
		x, y, z = lvl.reverseGetLvlUpMoves("synchronoise")
		fmt.Println(x, y, z)
	}
}
