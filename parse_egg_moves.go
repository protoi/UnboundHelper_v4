package main

import (
	"encoding/json"
	"os"
	"regexp"
	"strings"
)

// map of string -> array of string

type rawEggMoves map[string][]string

type actualEggMoves struct {
	PokemonName string
	EggMoveList []string
}

type PokemonEggMoves struct {
	eggMoves    *map[string]actualEggMoves
	rawEggMoves *map[string][]string
	filePath    *string
}

func initEggMoves() (PokemonEggMoves, bool) {
	eggMoveMap := make(map[string]actualEggMoves)
	rawEggMap := make(map[string][]string)
	path := "./data generation/temp/dataextractionnew/egg_moves/egg_moves.json"

	eggmove := PokemonEggMoves{
		eggMoves:    &eggMoveMap,
		rawEggMoves: &rawEggMap,
		filePath:    &path,
	}

	if status := eggmove.loadEggMoves(); status == true {
		eggmove.fixMap()
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

		(*eggmove.eggMoves)[fixedName] = actualEggMoves{
			PokemonName: key,
			EggMoveList: val,
		}
	}
}

func (eggmove PokemonEggMoves) getEggMoves(targetPokemon string) (actualEggMoves, bool) {
	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")
	normalizedTarget := strings.ToLower(stringNormalizer.ReplaceAllString(targetPokemon, ""))

	if eggmoves, found := (*eggmove.eggMoves)[normalizedTarget]; found == true {
		return eggmoves, true
	}
	return actualEggMoves{}, false
}
