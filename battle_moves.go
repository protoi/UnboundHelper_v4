package main

import (
	"encoding/json"
	"os"
	"regexp"
	"strings"
)

var (
	flagMapping = map[int]string{
		0b000001: "affected by mirror more",
		0b000010: "makes contact",
		0b000100: "affected by protect",
		0b001000: "affected by triage",
		0b010000: "affected by snatch",
		0b100000: "affected by mirror coat",
	}
)

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

type rawFixedBattleMoves struct {
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

type actualBattleMoves struct {
	moveName              string
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
	info *map[string]actualBattleMoves
	//rawInfo  *map[string]rawFixedBattleMoves
	filePath *string
}

func initMoveInfo() (MoveInfo, bool) {
	statMap := make(map[string]actualBattleMoves)
	//rawMap := make(map[string]rawFixedBattleMoves)
	path := "./data generation/temp/dataextractionnew/battle_moves/battle_move.json"
	moveinfo := MoveInfo{
		info: &statMap,
		//rawInfo:  &rawMap,
		filePath: &path,
	}

	if status := moveinfo.loadMoves(); status == true {
		return moveinfo, true
	}
	return MoveInfo{}, false
}

/*func (moveinfo MoveInfo) fixMap() {
	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")

	for key, val := range *(moveinfo.rawInfo) {
		// turn all names to lower case && remove characters other than alphabets and digits
		fixedName := strings.ToLower(stringNormalizer.ReplaceAllString(key, ""))

		(*moveinfo.info)[fixedName] = actualBattleMoves{
			moveName:              key,
			Target:                val.Target,
			Type:                  val.Type,
			Split:                 val.Split,
			Flags:                 val.Flags,
			ZMoveEffect:           val.ZMoveEffect,
			Effect:                val.Effect,
			Power:                 val.Power,
			Accuracy:              val.Accuracy,
			Pp:                    val.Pp,
			SecondaryEffectChance: val.SecondaryEffectChance,
			Priority:              val.Priority,
			ZMovePower:            val.ZMovePower,
		}
	}
}*/

func (moveinfo MoveInfo) loadMoves() bool {
	// reading successful
	if file, err := os.ReadFile(*(moveinfo.filePath)); err == nil {

		// deserializing successful
		unfixedMapping := make(map[string]rawBattleMoves)
		stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")

		if err := json.Unmarshal(file, &unfixedMapping); err == nil {
			// restructure this map of structs here
			for key, val := range unfixedMapping {
				fixedName := strings.ToLower(stringNormalizer.ReplaceAllString(key, ""))

				(*moveinfo.info)[fixedName] = actualBattleMoves{
					moveName:              key,
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

			return true
		}
	}
	return false
}

func (moveinfo MoveInfo) getInfo(targetMove string) (actualBattleMoves, bool) {
	// search for the move, if it does not exist return an empty struct and a false
	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")
	normalizedTarget := strings.ToLower(stringNormalizer.ReplaceAllString(targetMove, ""))

	if move_info, found := (*moveinfo.info)[normalizedTarget]; found == true {
		return move_info, true
	}
	return actualBattleMoves{}, false
}

func powersOfTwoSum(n int) []int {
	var result []int
	isolator := 1

	for i := 0; isolator <= n; i++ {
		isolatedVal := n & isolator
		isolator = isolator << 1
		if isolatedVal != 0 {
			result = append(result, isolatedVal)
		}
	}
	return result
}

func fixFlag(n int) []string {
	var stringFlags []string
	flagIDs := powersOfTwoSum(n)

	for _, flagID := range flagIDs {
		stringFlags = append(stringFlags, flagMapping[flagID])
	}
	return stringFlags
}
