package main

import (
	"regexp"
	"strings"
)

type abilityReverseMapping struct {
	revmap *map[string]reverseAbility
}
type AbilityContainer struct {
	first  []string
	second []string
	hidden []string
}

func initReverseAbilityMapping(pokestat PokemonStats) abilityReverseMapping {
	revmap := pokestat.generateReverseAbilityMappings()
	return abilityReverseMapping{
		revmap: &revmap,
	}

}

func (abrev abilityReverseMapping) getAbilityBearer(targetAbility string) (AbilityContainer, bool) {
	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")
	normalizedTarget := strings.ToLower(stringNormalizer.ReplaceAllString(targetAbility, ""))

	if abilityContainer, found := (*abrev.revmap)[normalizedTarget]; found == true {

		abilityCon := AbilityContainer{
			first:  abilityContainer.first.toList(),
			second: abilityContainer.second.toList(),
			hidden: abilityContainer.hidden.toList(),
		}

		return abilityCon, true
	}
	return AbilityContainer{
		first:  []string{},
		second: []string{},
		hidden: []string{},
	}, false
}
