package main

import (
	"encoding/json"
	"fmt"
	"os"
)

var (
	flagMapping = map[int]string{
		0b000001: "Affected by mirror more",
		0b000010: "Makes contact",
		0b000100: "Affected by protect",
		0b001000: "Affected by triage",
		0b010000: "Affected by snatch",
		0b100000: "Affected by mirror coat",
	}
)

func fixFlag(n int) []string {
	var stringFlags []string
	flagIDs := PowersOfTwoSum(n)

	for _, flagID := range flagIDs {
		stringFlags = append(stringFlags, flagMapping[flagID])
	}
	return stringFlags
}

type rawBattleMoves struct {
	Target                string `json:"target"`
	Type                  string `json:"type"`
	Split                 string `json:"split"`
	Flags                 int    `json:"flags"`
	ZMoveEffect           int    `json:"z_move_effect"`
	Effect                int    `json:"effect"`
	Power                 int    `json:"power"`
	Accuracy              int    `json:"accuracy"`
	Pp                    int    `json:"pp"`
	SecondaryEffectChance int    `json:"secondaryEffectChance"`
	Priority              int    `json:"priority"`
	ZMovePower            int    `json:"z_move_power"`
}

type BattleMoves struct {
	Target                string
	Type                  string
	Split                 string
	Flags                 []string
	ZMoveEffect           string
	Effect                string
	Power                 int
	Accuracy              int
	Pp                    int
	SecondaryEffectChance int
	Priority              int
	ZMovePower            int
}

type MoveInfo struct {
	info            *map[string]BattleMoves
	listOfMoveNames *[]string
	filePath        *string
}

func initMoveInfo() (MoveInfo, bool) {
	statMap := make(map[string]BattleMoves)
	listOfMoveNames := []string{}
	path := "./data generation/temp/dataextractionnew/battle_moves/battle_move.json"
	moveinfo := MoveInfo{
		info:            &statMap, //rawInfo:  &rawMap,
		listOfMoveNames: &listOfMoveNames,
		filePath:        &path,
	}

	if status := moveinfo.loadMoves(); status == true {
		return moveinfo, true
	}
	return MoveInfo{}, false
}

func (moveinfo MoveInfo) loadMoves() bool {
	// reading successful
	if file, err := os.ReadFile(*(moveinfo.filePath)); err == nil {

		// deserializing successful
		unfixedMapping := make(map[string]rawBattleMoves)

		if err := json.Unmarshal(file, &unfixedMapping); err == nil {
			// restructure this map of structs here

			setOfMoveNames := initSet()

			for moveName, val := range unfixedMapping {

				setOfMoveNames.add(moveName)

				(*moveinfo.info)[moveName] = BattleMoves{
					Target:                val.Target,
					Type:                  val.Type,
					Split:                 val.Split,
					Flags:                 fixFlag(val.Flags), // convert binary number into list of strings
					ZMoveEffect:           "",                 // convert int to string
					Effect:                "",                 // convert this int to string
					Power:                 val.Power,
					Accuracy:              val.Accuracy,
					Pp:                    val.Pp,
					SecondaryEffectChance: val.SecondaryEffectChance,
					Priority:              val.Priority,
					ZMovePower:            val.ZMovePower,
				}
			}

			*moveinfo.listOfMoveNames = setOfMoveNames.toList()

			return true
		}
	}
	return false
}

func (moveinfo MoveInfo) getInfo(targetMove string) (string, BattleMoves, bool) {
	// search for the move, if it does not exist return an empty struct and a false
	// fuzzy search for the pokemon name inside eggmove.listOfPokemons
	moveNameMatches := FindClosestMatches(targetMove, *moveinfo.listOfMoveNames)

	if len(moveNameMatches) == 0 {
		return "", BattleMoves{}, false
	}

	if move_info, found := (*moveinfo.info)[moveNameMatches[0]]; found == true {
		return moveNameMatches[0], move_info, true
	}
	return "", BattleMoves{}, false
}

func test_fuzzy_battle_moves() {
	if mi, status := initMoveInfo(); status == true {

		a, b, c := mi.getInfo("wickd blow")
		fmt.Println(a, b, c)
		a, b, c = mi.getInfo("blow job")
		fmt.Println(a, b, c)
		a, b, c = mi.getInfo("wood hammr")
		fmt.Println(a, b, c)
		a, b, c = mi.getInfo("thunder cage")
		fmt.Println(a, b, c)
		a, b, c = mi.getInfo("monster mash")
		fmt.Println(a, b, c)
	}
}
