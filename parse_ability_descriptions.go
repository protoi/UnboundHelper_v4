package main

import (
	"encoding/json"
	"os"
	"regexp"
	"strings"
)

type actualAbilityDescriptions struct {
	AbilityName        string `json:"name"`
	AbilityDescription string `json:"effect"`
}

type AbilityDescriptions struct {
	AbilityDescriptionMapping *map[string]actualAbilityDescriptions

	filePath *string
}

func initAbilityDesc() (AbilityDescriptions, bool) {
	abDescMap := make(map[string]actualAbilityDescriptions)

	path := "./data generation/temp/DATA/ability_description.json"

	abilityDesc := AbilityDescriptions{
		AbilityDescriptionMapping: &abDescMap,
		filePath:                  &path,
	}

	if status := abilityDesc.loadAbilityDescriptions(); status == true {
		return abilityDesc, true
	}
	return AbilityDescriptions{}, false
}

func (d AbilityDescriptions) loadAbilityDescriptions() interface{} {

	var abilities []actualAbilityDescriptions
	if file, err := os.ReadFile(*(d.filePath)); err == nil {

		if err := json.Unmarshal(file, &abilities); err == nil {
			stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")

			for _, ab := range abilities {
				fixedName := strings.ToLower(stringNormalizer.ReplaceAllString(ab.AbilityName, ""))
				(*d.AbilityDescriptionMapping)[fixedName] = actualAbilityDescriptions{
					AbilityName:        ab.AbilityName,
					AbilityDescription: ab.AbilityDescription,
				}
			}
			return true
		}
	}
	return false
}

func (d AbilityDescriptions) getDescription(targetAbility string) (actualAbilityDescriptions, bool) {
	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")
	normalizedTarget := strings.ToLower(stringNormalizer.ReplaceAllString(targetAbility, ""))

	if abilityDesc, found := (*d.AbilityDescriptionMapping)[normalizedTarget]; found == true {
		return abilityDesc, true
	}
	return actualAbilityDescriptions{}, false
}
