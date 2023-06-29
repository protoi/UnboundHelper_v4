package main

//import (
//	"regexp"
//	"strings"
//)
//
//type AbilityInfo struct {
//	revmap *map[string]reverseAbility
//}
//type AbilityContainer struct {
//	first  []string
//	second []string
//	hidden []string
//}
//
//func initReverseAbilityMapping(pokestat PokemonStats) AbilityInfo {
//	revmap := pokestat.generateReverseAbilityMappings()
//	return AbilityInfo{
//		revmap: &revmap,
//	}
//
//}
//
//func (abrev AbilityInfo) getAbilityBearer(targetAbility string) (AbilityContainer, bool) {
//	stringNormalizer := regexp.MustCompile("[^a-zA-Z0-9]+")
//	normalizedTarget := strings.ToLower(stringNormalizer.ReplaceAllString(targetAbility, ""))
//
//	if abilityContainer, found := (*abrev.revmap)[normalizedTarget]; found == true {
//
//		abilityCon := AbilityContainer{
//			first:  abilityContainer.first.toList(),
//			second: abilityContainer.second.toList(),
//			hidden: abilityContainer.hidden.toList(),
//		}
//
//		return abilityCon, true
//	}
//	return AbilityContainer{
//		first:  []string{},
//		second: []string{},
//		hidden: []string{},
//	}, false
//}
