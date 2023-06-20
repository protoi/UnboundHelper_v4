package main

import (
	"encoding/json"
	"os"
	"regexp"
	"strings"
)

type actualEggMoves struct {
	PokemonName string
	EggMoveList []string
}

type actualReverseEggMoves struct {
	EggMoveName string
	Pokemons    Set
}

type actualReverseEggMovesList struct {
	EggMoveName string
	Pokemons    []string
}

type PokemonEggMoves struct {
	eggMoves    *map[string]actualEggMoves
	rawEggMoves *map[string][]string

	rawReverseEggMoves *map[string]Set // move name -> set of unnormalized pokemon names
	reverseEggMoves    *map[string]actualReverseEggMoves

	filePath *string
}

func initEggMoves() (PokemonEggMoves, bool) {
	eggMoveMap := make(map[string]actualEggMoves)
	rawEggMap := make(map[string][]string)

	reverseEggMoveMap := make(map[string]actualReverseEggMoves)
	rawReverseEggMoveMap := make(map[string]Set)

	path := "./data generation/temp/dataextractionnew/egg_moves/egg_moves.json"

	eggmove := PokemonEggMoves{
		eggMoves:           &eggMoveMap,
		rawEggMoves:        &rawEggMap,
		rawReverseEggMoves: &rawReverseEggMoveMap,
		reverseEggMoves:    &reverseEggMoveMap,
		filePath:           &path,
	}

	if status := eggmove.loadEggMoves(); status == true {
		eggmove.fixMap()
		eggmove.reverseMap()
		return eggmove, true
	}
	return PokemonEggMoves{}, false
}

func (eggmove PokemonEggMoves) loadEggMoves() bool {
	// reading successful
	if file, err := os.ReadFile(*(eggmove.filePath)); err == nil {

		// deserializing successful
		if err := json.Unmarshal(file, eggmove.rawEggMoves); err == nil {
			return true
		}
	}
	return false
}

func (eggmove PokemonEggMoves) fixMap() {
	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")

	for key, val := range *(eggmove.rawEggMoves) {
		// turn all names into lower case and remove special characters other than the alphanumerics
		fixedName := strings.ToLower(stringNormalizer.ReplaceAllString(key, ""))

		// map normalized name with {actual name + egg move list}
		(*eggmove.eggMoves)[fixedName] = actualEggMoves{
			PokemonName: key,
			EggMoveList: val,
		}
	}
}

func (eggmove PokemonEggMoves) reverseMap() {
	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")

	// convert A -> [1,2] | B -> [1,2,4] ==> 1 -> {A,B} | 2 -> {A,B} | 4 -> {B}
	for pokemon_name, eggmove_list := range *(eggmove.rawEggMoves) {
		for _, eggmove_name := range eggmove_list {
			// if eggmove name not present, set it to an empty set

			// first time seeing this egg move
			if _, found := (*eggmove.rawReverseEggMoves)[eggmove_name]; found != true {
				pokemonNameSet := make(map[string]struct{})
				(*eggmove.rawReverseEggMoves)[eggmove_name] = Set{members: &pokemonNameSet}
			}
			// now add the pokemon name to the set
			(*eggmove.rawReverseEggMoves)[eggmove_name].add(pokemon_name)
		}
	}

	// convert Belly Drum -> {Charmander, Marill} ==>
	//bellydrum -> struct{ eggMoveName: Belly Drum, pokemons: [Charmander, Marill]}
	for eggmove_name, pokemon_set := range *(eggmove.rawReverseEggMoves) {
		normalizedEggMoveName := strings.ToLower(stringNormalizer.ReplaceAllString(eggmove_name, ""))
		(*eggmove.reverseEggMoves)[normalizedEggMoveName] = actualReverseEggMoves{
			EggMoveName: eggmove_name,
			Pokemons:    pokemon_set,
		}
	}
}

// get list of egg moves for a pokemon
func (eggmove PokemonEggMoves) getEggMoves(targetPokemon string) (actualEggMoves, bool) {
	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")
	normalizedTarget := strings.ToLower(stringNormalizer.ReplaceAllString(targetPokemon, ""))

	if eggmoves, found := (*eggmove.eggMoves)[normalizedTarget]; found == true {
		return eggmoves, true
	}
	return actualEggMoves{}, false
}

// returns {actual move name + list of pokemon names} that learn an egg move
func (eggmove PokemonEggMoves) reverseGetEggMoves(targetEggMove string) (actualReverseEggMovesList, bool) {
	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")
	normalizedTarget := strings.ToLower(stringNormalizer.ReplaceAllString(targetEggMove, ""))

	if pokemon_name_set, found := (*eggmove.reverseEggMoves)[normalizedTarget]; found == true {
		pokemon_list := pokemon_name_set.Pokemons.toList()

		return actualReverseEggMovesList{
			EggMoveName: pokemon_name_set.EggMoveName,
			Pokemons:    pokemon_list,
		}, true
	}
	return actualReverseEggMovesList{}, false
}
