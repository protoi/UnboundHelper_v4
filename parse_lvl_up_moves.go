package main

//import (
//	"encoding/json"
//	"os"
//	"regexp"
//	"strings"
//)
//
//// a tuple of level and move
//type levelMoveTuple struct {
//	Level int    `json:"level"`
//	Move  string `json:"move"`
//}
//
//// a list of such tuples
//type moveList []levelMoveTuple
//
//// pokemon name + list of tuple
//type actualLvlUpMoves struct {
//	PokemonName string
//	MoveList    moveList
//}
//
//type PokemonLvlUpMoves struct {
//	lvlUpMoves *map[string]actualLvlUpMoves
//	filePath   *string
//}
//
//func initPokemonLevelUpMoves() (PokemonLvlUpMoves, bool) {
//	levelUpMap := make(map[string]actualLvlUpMoves)
//
//	path := "./data generation/temp/dataextractionnew/levelup_moves/level_up_learnset.json"
//
//	levelup := PokemonLvlUpMoves{
//		lvlUpMoves: &levelUpMap,
//		filePath:   &path,
//	}
//
//	if status := levelup.loadLevelUpMoves(); status == true {
//		return levelup, true
//	}
//	return PokemonLvlUpMoves{}, false
//}
//
//func (levelup PokemonLvlUpMoves) loadLevelUpMoves() bool {
//
//	// reading successful
//	if file, err := os.ReadFile(*(levelup.filePath)); err == nil {
//		tempLvlUpMoves := make(map[string]moveList)
//		// deserializing successful
//		if err := json.Unmarshal(file, &tempLvlUpMoves); err == nil {
//
//			stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")
//
//			for key, val := range tempLvlUpMoves {
//				// turn all names to lower case && remove characters other than alphabets and digits
//				fixedName := strings.ToLower(stringNormalizer.ReplaceAllString(key, ""))
//
//				(*levelup.lvlUpMoves)[fixedName] = actualLvlUpMoves{
//					PokemonName: key, // original, unnormalized pokemon name
//					MoveList:    val,
//				}
//			}
//			return true
//		}
//	}
//	return false
//}
//
///*
//func (levelup PokemonLvlUpMoves) fixMap() {
//
//		stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")
//
//		for key, val := range *(levelup.rawLvlUpMoves) {
//			// turn all names to lower case && remove characters other than alphabets and digits
//			fixedName := strings.ToLower(stringNormalizer.ReplaceAllString(key, ""))
//
//			(*levelup.lvlUpMoves)[fixedName] = actualLvlUpMoves{
//				PokemonName: key, // original, unnormalized pokemon name
//				MoveList:    val,
//			}
//		}
//	}
//*/
//func (levelup PokemonLvlUpMoves) getLvlUpMoves(targetPokemon string) (actualLvlUpMoves, bool) {
//	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")
//	normalizedTarget := strings.ToLower(stringNormalizer.ReplaceAllString(targetPokemon, ""))
//
//	if lvlUpMoves, found := (*levelup.lvlUpMoves)[normalizedTarget]; found == true {
//		return lvlUpMoves, true
//	}
//	return actualLvlUpMoves{}, false
//}
