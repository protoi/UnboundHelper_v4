package main

import (
	"encoding/json"
	"os"
	"regexp"
	"strings"
)

type rawPokemonToTmTutorCompatibility struct {
	TM    []string `json:"tm"`
	Tutor []string `json:"tutor"`
}

type actualPokemonToTmTutorCompatibility struct {
	PokemonName string
	TM          []string
	Tutor       []string
}

type tmMoves struct {
	PokemonName string
	TM          []string
}

type tutorMoves struct {
	PokemonName string
	Tutor       []string
}

type TmTutorMoves struct {
	tmAndTutor         *map[string]actualPokemonToTmTutorCompatibility
	tmAndTutorFilePath *string
}

/*
returns pokemon -> {tm: []string, tutor : []string} mapping
*/
func initPokemonToTMAndTutor() (TmTutorMoves, bool) {
	actualTmTutorMap := make(map[string]actualPokemonToTmTutorCompatibility)

	tmAndTutorPath := "./data generation/temp/dataextractionnew/tutor_tm_combined/tm_tutor_combined.json"

	tmAndTutor := TmTutorMoves{
		tmAndTutor:         &actualTmTutorMap,
		tmAndTutorFilePath: &tmAndTutorPath,
	}

	if status := tmAndTutor.loadMapping(); status == true {
		//tmAndTutor.fixMap()
		return tmAndTutor, true
	}
	return TmTutorMoves{}, false
}

func (tmAndTutor TmTutorMoves) loadMapping() bool {

	// reading was successful
	if file, err := os.ReadFile(*(tmAndTutor.tmAndTutorFilePath)); err == nil {
		// deserialization was a success
		tempTmAndTutor := make(map[string]rawPokemonToTmTutorCompatibility)

		if err := json.Unmarshal(file, &tempTmAndTutor); err == nil {
			stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")

			for key, val := range tempTmAndTutor {
				fixedPokemonName := strings.ToLower(stringNormalizer.ReplaceAllString(key, ""))

				(*tmAndTutor.tmAndTutor)[fixedPokemonName] = actualPokemonToTmTutorCompatibility{
					PokemonName: key, // original, unnormalized pokemon name
					TM:          val.TM,
					Tutor:       val.Tutor,
				}
			}
			return true
		}
	}
	return false
}

// maps normalizedPokemon name with the original struct
/*func (tmAndTutor TmTutorMoves) fixMap() {

	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")

	for key, val := range *(tmAndTutor.rawTmAndTutor) {
		fixedPokemonName := strings.ToLower(stringNormalizer.ReplaceAllString(key, ""))

		(*tmAndTutor.tmAndTutor)[fixedPokemonName] = actualPokemonToTmTutorCompatibility{
			PokemonName: key, // original, unnormalized pokemon name
			TM:          val.TM,
			Tutor:       val.Tutor,
		}
	}
}*/

func (tmAndTutor TmTutorMoves) getCompatibleTM(targetPokemon string) (tmMoves, bool) {
	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")
	normalizedTarget := strings.ToLower(stringNormalizer.ReplaceAllString(targetPokemon, ""))

	if tmAndTutorInfo, found := (*tmAndTutor.tmAndTutor)[normalizedTarget]; found == true {
		return tmMoves{
			PokemonName: tmAndTutorInfo.PokemonName,
			TM:          tmAndTutorInfo.TM,
		}, true
	}
	return tmMoves{}, false
}

func (tmAndTutor TmTutorMoves) getCompatibleTutor(targetPokemon string) (tutorMoves, bool) {
	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")
	normalizedTarget := strings.ToLower(stringNormalizer.ReplaceAllString(targetPokemon, ""))

	if tmAndTutorInfo, found := (*tmAndTutor.tmAndTutor)[normalizedTarget]; found == true {
		return tutorMoves{
			PokemonName: tmAndTutorInfo.PokemonName,
			Tutor:       tmAndTutorInfo.Tutor,
		}, true
	}
	return tutorMoves{}, false
}
