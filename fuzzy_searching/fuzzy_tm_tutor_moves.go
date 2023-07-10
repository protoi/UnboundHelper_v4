package fuzzy_searching

import (
	"encoding/json"
	"fmt"
	"os"
	"strings"
	"unbound_helper_v4/utils"
)

type PokemonToTmTutorCompatibility struct {
	TM    []string `json:"tm"`
	Tutor []string `json:"tutor"`
}

type ReverseTM struct {
	Pokemons utils.Set
}

type ReverseTutor struct {
	Pokemons utils.Set
}

type TmTutorMoves struct {
	tmAndTutor           *map[string]PokemonToTmTutorCompatibility
	reverseTM            *map[string]ReverseTM
	reverseTutor         *map[string]ReverseTutor
	listOfPokemonsNames  *[]string
	listOfTmMoveNames    *[]string
	listOfTutorMoveNames *[]string
	tmAndTutorFilePath   *string
}

/*
returns pokemon -> {tm: []string, tutor : []string} mapping
*/
func InitPokemonToTMAndTutor() (TmTutorMoves, bool) {
	actualTmTutorMap := make(map[string]PokemonToTmTutorCompatibility)
	reverseTMMap := make(map[string]ReverseTM)
	reverseTutorMap := make(map[string]ReverseTutor)
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

			pokemonNameSet := utils.InitSet()
			tmSet := utils.InitSet()
			tutorSet := utils.InitSet()

			for name, tuple := range tempTmAndTutor {

				tmSet.AddList(tuple.TM)
				tutorSet.AddList(tuple.Tutor)
				pokemonNameSet.Add(name)

				(*tmAndTutor.tmAndTutor)[name] = PokemonToTmTutorCompatibility{
					TM:    tuple.TM,
					Tutor: tuple.Tutor,
				}
			}
			*tmAndTutor.listOfTmMoveNames = tmSet.ToList()
			*tmAndTutor.listOfTutorMoveNames = tutorSet.ToList()
			*tmAndTutor.listOfPokemonsNames = pokemonNameSet.ToList()

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
				(*tmAndTutor.reverseTM)[moveName] = ReverseTM{Pokemons: utils.InitSet()} // Set{members: &pokemonNameSet}
			}
			// now add the pokemon name to the set
			(*tmAndTutor.reverseTM)[moveName].Pokemons.Add(pokemonName)
		}

		for _, moveName := range tuple.Tutor {
			// if move name not present, set it to an empty set

			// first time seeing this tutor move
			if _, found := (*tmAndTutor.reverseTutor)[moveName]; found != true {
				//pokemonNameSet := make(map[string]struct{})
				(*tmAndTutor.reverseTutor)[moveName] = ReverseTutor{Pokemons: utils.InitSet()} // Set{members: &pokemonNameSet}
			}
			// now add the pokemon name to the set
			(*tmAndTutor.reverseTutor)[moveName].Pokemons.Add(pokemonName)
		}

	}
}

func (tmAndTutor TmTutorMoves) GetCompatibleTM(targetPokemon string) (string, []string, bool) {

	//pokemonNameMatches := utils.FindClosestMatches(targetPokemon, *tmAndTutor.listOfPokemonsNames)
	//if len(pokemonNameMatches) == 0 {
	//	return "", []string{}, false
	//}

	maxThresh := len(strings.TrimSpace(targetPokemon)) / 3
	pokemonNameMatches, status := utils.FindClosestString(targetPokemon, *tmAndTutor.listOfPokemonsNames, maxThresh)
	if !status {
		return "", []string{}, false
	}

	if tuple, found := (*tmAndTutor.tmAndTutor)[pokemonNameMatches]; found == true {
		return pokemonNameMatches, tuple.TM, true
	}

	return "", []string{}, false
}

func (tmAndTutor TmTutorMoves) GetCompatibleTutor(targetPokemon string) (string, []string, bool) {

	//pokemonNameMatches := utils.FindClosestMatches(targetPokemon, *tmAndTutor.listOfPokemonsNames)
	//if len(pokemonNameMatches) == 0 {
	//	return "", []string{}, false
	//}

	maxThresh := len(strings.TrimSpace(targetPokemon)) / 3
	pokemonNameMatches, status := utils.FindClosestString(targetPokemon, *tmAndTutor.listOfPokemonsNames, maxThresh)
	if !status {
		return "", []string{}, false
	}

	if tuple, found := (*tmAndTutor.tmAndTutor)[pokemonNameMatches]; found == true {
		return pokemonNameMatches, tuple.Tutor, true
	}

	return "", []string{}, false
}

func (tmAndTutor TmTutorMoves) ReverseGetCompatibleTM(targetTM string) (string, []string, bool) {

	//tmMatches := utils.FindClosestMatches(targetTM, *tmAndTutor.listOfTmMoveNames)
	//if len(tmMatches) == 0 {
	//	return "", []string{}, false
	//}

	maxThresh := len(strings.TrimSpace(targetTM)) / 3
	tmMatches, status := utils.FindClosestString(targetTM, *tmAndTutor.listOfTmMoveNames, maxThresh)
	if !status {
		return "", []string{}, false
	}

	if pokemons, found := (*tmAndTutor.reverseTM)[tmMatches]; found == true {
		return tmMatches, pokemons.Pokemons.ToList(), true
	}

	return "", []string{}, false
}

func (tmAndTutor TmTutorMoves) ReverseGetCompatibleTutor(targetTutor string) (string, []string, bool) {

	//tutorMatches := utils.FindClosestMatches(targetTutor, *tmAndTutor.listOfTutorMoveNames)
	//if len(tutorMatches) == 0 {
	//	return "", []string{}, false
	//}

	maxThresh := len(strings.TrimSpace(targetTutor)) / 3
	tutorMatches, status := utils.FindClosestString(targetTutor, *tmAndTutor.listOfTutorMoveNames, maxThresh)
	if !status {
		return "", []string{}, false
	}

	if pokemons, found := (*tmAndTutor.reverseTutor)[tutorMatches]; found == true {
		return tutorMatches, pokemons.Pokemons.ToList(), true
	}

	return "", []string{}, false
}

func Test_fuzzy_tm_tutor_moves() {
	if tt, status := InitPokemonToTMAndTutor(); status == true {

		fmt.Println("=================TM MOVE COMPATIBILITY====================")
		a, b, c := tt.GetCompatibleTM("gasly")
		fmt.Println(a, b, c)
		a, b, c = tt.GetCompatibleTM("hauntr")
		fmt.Println(a, b, c)
		a, b, c = tt.GetCompatibleTM("deoxys attack")
		fmt.Println(a, b, c)
		a, b, c = tt.GetCompatibleTM("arceus water")
		fmt.Println(a, b, c)
		a, b, c = tt.GetCompatibleTM("urshifu single strike")
		fmt.Println(a, b, c)

		fmt.Println("=================TUTOR MOVE COMPATIBILITY====================")
		a, b, c = tt.GetCompatibleTutor("gasly")
		fmt.Println(a, b, c)
		a, b, c = tt.GetCompatibleTutor("hauntr")
		fmt.Println(a, b, c)
		a, b, c = tt.GetCompatibleTutor("deoxys attack")
		fmt.Println(a, b, c)
		a, b, c = tt.GetCompatibleTutor("arceus water")
		fmt.Println(a, b, c)
		a, b, c = tt.GetCompatibleTutor("unown")
		fmt.Println(a, b, c)

		fmt.Println("=================TM REVERSE COMPATIBILITY====================")
		a, b, c = tt.ReverseGetCompatibleTM("flame thrower")
		fmt.Println(a, b, c)
		a, b, c = tt.ReverseGetCompatibleTM("defog")
		fmt.Println(a, b, c)
		a, b, c = tt.ReverseGetCompatibleTM("hurricane")
		fmt.Println(a, b, c)
		a, b, c = tt.ReverseGetCompatibleTM("water pulse")
		fmt.Println(a, b, c)
		a, b, c = tt.ReverseGetCompatibleTM("light scren")
		fmt.Println(a, b, c)

		fmt.Println("=================TUTOR REVERSE COMPATIBILITY====================")
		a, b, c = tt.ReverseGetCompatibleTutor("hurricane")
		fmt.Println(a, b, c)
		a, b, c = tt.ReverseGetCompatibleTutor("close wombat")
		fmt.Println(a, b, c)
		a, b, c = tt.ReverseGetCompatibleTutor("funk shot")
		fmt.Println(a, b, c)
		a, b, c = tt.ReverseGetCompatibleTutor("triple axel")
		fmt.Println(a, b, c)
		a, b, c = tt.ReverseGetCompatibleTutor("triple axle")
		fmt.Println(a, b, c)

	}
}
