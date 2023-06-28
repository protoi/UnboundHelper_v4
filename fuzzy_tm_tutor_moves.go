package main

import (
	"encoding/json"
	"fmt"
	"os"
)

type PokemonToTmTutorCompatibility struct {
	TM    []string `json:"tm"`
	Tutor []string `json:"tutor"`
}

type tmMoves struct {
	TM []string
}

type tutorMoves struct {
	Tutor []string
}

type reverseTM struct {
	Pokemons Set
}

type reverseTutor struct {
	Pokemons Set
}

type TmTutorMoves struct {
	tmAndTutor           *map[string]PokemonToTmTutorCompatibility
	reverseTM            *map[string]reverseTM
	reverseTutor         *map[string]reverseTutor
	listOfPokemonsNames  *[]string
	listOfTmMoveNames    *[]string
	listOfTutorMoveNames *[]string
	tmAndTutorFilePath   *string
}

/*
returns pokemon -> {tm: []string, tutor : []string} mapping
*/
func initPokemonToTMAndTutor() (TmTutorMoves, bool) {
	actualTmTutorMap := make(map[string]PokemonToTmTutorCompatibility)
	reverseTMMap := make(map[string]reverseTM)
	reverseTutorMap := make(map[string]reverseTutor)
	listOfTmMoveNames := []string{}
	listOfTutorMoveNames := []string{}
	listOfPokemonNames := []string{}

	tmAndTutorPath := "./data generation/temp/dataextractionnew/tutor_tm_combined/tm_tutor_combined.json"

	tmAndTutor := TmTutorMoves{
		tmAndTutor:           &actualTmTutorMap,
		reverseTM:            &reverseTMMap,
		reverseTutor:         &reverseTutorMap,
		listOfTmMoveNames:    &listOfTmMoveNames,
		listOfTutorMoveNames: &listOfTutorMoveNames,
		listOfPokemonsNames:  &listOfPokemonNames,
		tmAndTutorFilePath:   &tmAndTutorPath,
	}

	if status := tmAndTutor.loadMapping(); status == true {
		tmAndTutor.reverseMapTM()
		return tmAndTutor, true
	}
	return TmTutorMoves{}, false
}

func (tmAndTutor TmTutorMoves) loadMapping() bool {

	// reading was successful
	if file, err := os.ReadFile(*(tmAndTutor.tmAndTutorFilePath)); err == nil {
		// deserialization was a success
		tempTmAndTutor := make(map[string]PokemonToTmTutorCompatibility)

		if err := json.Unmarshal(file, &tempTmAndTutor); err == nil {

			pokemonNameSet := initSet()
			tmSet := initSet()
			tutorSet := initSet()

			for name, tuple := range tempTmAndTutor {

				tmSet.addList(tuple.TM)
				tutorSet.addList(tuple.Tutor)
				pokemonNameSet.add(name)

				(*tmAndTutor.tmAndTutor)[name] = PokemonToTmTutorCompatibility{
					TM:    tuple.TM,
					Tutor: tuple.Tutor,
				}
			}
			*tmAndTutor.listOfTmMoveNames = tmSet.toList()
			*tmAndTutor.listOfTutorMoveNames = tutorSet.toList()
			*tmAndTutor.listOfPokemonsNames = pokemonNameSet.toList()

			return true
		}
	}
	return false
}

func (tmAndTutor TmTutorMoves) reverseMapTM() {

	for pokemonName, tuple := range *(tmAndTutor.tmAndTutor) {
		for _, moveName := range tuple.TM {
			// if move name not present, set it to an empty set

			// first time seeing this tm move
			if _, found := (*tmAndTutor.reverseTM)[moveName]; found != true {
				(*tmAndTutor.reverseTM)[moveName] = reverseTM{Pokemons: initSet()} // Set{members: &pokemonNameSet}
			}
			// now add the pokemon name to the set
			(*tmAndTutor.reverseTM)[moveName].Pokemons.add(pokemonName)
		}

		for _, moveName := range tuple.Tutor {
			// if move name not present, set it to an empty set

			// first time seeing this tutor move
			if _, found := (*tmAndTutor.reverseTutor)[moveName]; found != true {
				//pokemonNameSet := make(map[string]struct{})
				(*tmAndTutor.reverseTutor)[moveName] = reverseTutor{Pokemons: initSet()} // Set{members: &pokemonNameSet}
			}
			// now add the pokemon name to the set
			(*tmAndTutor.reverseTutor)[moveName].Pokemons.add(pokemonName)
		}

	}
}

func (tmAndTutor TmTutorMoves) getCompatibleTM(targetPokemon string) (string, []string, bool) {

	pokemonNameMatches := FindClosestMatches(targetPokemon, *tmAndTutor.listOfPokemonsNames)

	if len(pokemonNameMatches) == 0 {
		return "", []string{}, false
	}

	if tuple, found := (*tmAndTutor.tmAndTutor)[pokemonNameMatches[0]]; found == true {
		return pokemonNameMatches[0], tuple.TM, true
	}

	return "", []string{}, false
}

func (tmAndTutor TmTutorMoves) getCompatibleTutor(targetPokemon string) (string, []string, bool) {

	pokemonNameMatches := FindClosestMatches(targetPokemon, *tmAndTutor.listOfPokemonsNames)

	if len(pokemonNameMatches) == 0 {
		return "", []string{}, false
	}

	if tuple, found := (*tmAndTutor.tmAndTutor)[pokemonNameMatches[0]]; found == true {
		return pokemonNameMatches[0], tuple.Tutor, true
	}

	return "", []string{}, false
}

func (tmAndTutor TmTutorMoves) reverseGetCompatibleTM(targetTM string) (string, []string, bool) {

	tmMatches := FindClosestMatches(targetTM, *tmAndTutor.listOfTmMoveNames)

	if len(tmMatches) == 0 {
		return "", []string{}, false
	}

	if pokemons, found := (*tmAndTutor.reverseTM)[tmMatches[0]]; found == true {
		return tmMatches[0], pokemons.Pokemons.toList(), true
	}

	return "", []string{}, false
}

func (tmAndTutor TmTutorMoves) reverseGetCompatibleTutor(targetTutor string) (string, []string, bool) {

	tutorMatches := FindClosestMatches(targetTutor, *tmAndTutor.listOfTutorMoveNames)

	if len(tutorMatches) == 0 {
		return "", []string{}, false
	}

	if pokemons, found := (*tmAndTutor.reverseTutor)[tutorMatches[0]]; found == true {
		return tutorMatches[0], pokemons.Pokemons.toList(), true
	}

	return "", []string{}, false
}

func test_fuzzy_tm_tutor_moves() {
	if tt, status := initPokemonToTMAndTutor(); status == true {

		fmt.Println("=================TM MOVE COMPATIBILITY====================")
		a, b, c := tt.getCompatibleTM("gasly")
		fmt.Println(a, b, c)
		a, b, c = tt.getCompatibleTM("hauntr")
		fmt.Println(a, b, c)
		a, b, c = tt.getCompatibleTM("deoxys attack")
		fmt.Println(a, b, c)
		a, b, c = tt.getCompatibleTM("arceus water")
		fmt.Println(a, b, c)
		a, b, c = tt.getCompatibleTM("urshifu single strike")
		fmt.Println(a, b, c)

		fmt.Println("=================TUTOR MOVE COMPATIBILITY====================")
		a, b, c = tt.getCompatibleTutor("gasly")
		fmt.Println(a, b, c)
		a, b, c = tt.getCompatibleTutor("hauntr")
		fmt.Println(a, b, c)
		a, b, c = tt.getCompatibleTutor("deoxys attack")
		fmt.Println(a, b, c)
		a, b, c = tt.getCompatibleTutor("arceus water")
		fmt.Println(a, b, c)
		a, b, c = tt.getCompatibleTutor("unown")
		fmt.Println(a, b, c)

		fmt.Println("=================TM REVERSE COMPATIBILITY====================")
		a, b, c = tt.reverseGetCompatibleTM("flame thrower")
		fmt.Println(a, b, c)
		a, b, c = tt.reverseGetCompatibleTM("defog")
		fmt.Println(a, b, c)
		a, b, c = tt.reverseGetCompatibleTM("hurricane")
		fmt.Println(a, b, c)
		a, b, c = tt.reverseGetCompatibleTM("water pulse")
		fmt.Println(a, b, c)
		a, b, c = tt.reverseGetCompatibleTM("light scren")
		fmt.Println(a, b, c)

		fmt.Println("=================TUTOR REVERSE COMPATIBILITY====================")
		a, b, c = tt.reverseGetCompatibleTutor("hurricane")
		fmt.Println(a, b, c)
		a, b, c = tt.reverseGetCompatibleTutor("close wombat")
		fmt.Println(a, b, c)
		a, b, c = tt.reverseGetCompatibleTutor("funk shot")
		fmt.Println(a, b, c)
		a, b, c = tt.reverseGetCompatibleTutor("triple axel")
		fmt.Println(a, b, c)
		a, b, c = tt.reverseGetCompatibleTutor("triple axle")
		fmt.Println(a, b, c)

	}
}
