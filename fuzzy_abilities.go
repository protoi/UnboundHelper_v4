package main

import (
	"encoding/json"
	"fmt"
	"os"
)

type AbilityDescriptions struct {
	AbilityName        string `json:"name"`
	AbilityDescription string `json:"effect"`
}

type AbilityInfo struct {
	revmap                *map[string]reverseAbility
	descriptions          *map[string]AbilityDescriptions
	listOfAbilities       *[]string
	listOfActualAbilities *[]string          // abilities picked from the ability description file, proper capitalization and spellings
	abilityInterMapping   *map[string]string // map actual ability with raw ability and vice-versa
	filePath              *string            // link to {ability,description} tuples
}
type AbilityContainer struct {
	first  []string
	second []string
	hidden []string
}

func initAbilityInfo(pokestat PokemonStats) (AbilityInfo, bool) {
	revmap := generateReverseAbilityMappings(pokestat)
	abDescMap := make(map[string]AbilityDescriptions)
	abilityInterMapping := make(map[string]string)
	listOfActualAbilities := []string{}
	path := "./data generation/temp/DATA/ability_description.json"

	abInfo := AbilityInfo{
		revmap:                &revmap,
		descriptions:          &abDescMap,
		listOfAbilities:       pokestat.listOfAbilities,
		listOfActualAbilities: &listOfActualAbilities,
		abilityInterMapping:   &abilityInterMapping,
		filePath:              &path,
	}

	if status := abInfo.loadAbilityDescriptions(); status == true {
		abInfo.interMapAbilities()
		return abInfo, true
	}

	return AbilityInfo{}, false

}

func (abInfo AbilityInfo) interMapAbilities() {
	// if levenshtein distance is more than 5 we classify them as not a match

	// first map raw abilities with the actual abilities
	for _, rawAbilityName := range *abInfo.listOfAbilities {
		closestMatch, status := FindClosestString(rawAbilityName, *abInfo.listOfActualAbilities, 5)

		if status == false {
			(*abInfo.abilityInterMapping)[rawAbilityName] = rawAbilityName
		} else {
			(*abInfo.abilityInterMapping)[rawAbilityName] = closestMatch
		}
	}

	// second map actual abilities with the raw abilities
	for _, actualAbilityName := range *abInfo.listOfActualAbilities {
		closestMatch, status := FindClosestString(actualAbilityName, *abInfo.listOfAbilities, 5)

		if status == false {
			(*abInfo.abilityInterMapping)[actualAbilityName] = actualAbilityName
		} else {
			(*abInfo.abilityInterMapping)[actualAbilityName] = closestMatch
		}
	}

}

func generateReverseAbilityMappings(pokestat PokemonStats) map[string]reverseAbility {
	reverseAbilityMapping := make(map[string]reverseAbility)

	for pokemonName, pokemon_base_stats := range *(pokestat.stats) {

		var (
			ab1, ab2, ha = pokemon_base_stats.Ability1, pokemon_base_stats.Ability2, pokemon_base_stats.HiddenAbility
		)

		// ability 1
		if _, status := reverseAbilityMapping[ab1]; status != true { // ability 1 already not present
			reverseAbilityMapping[ab1] = reverseAbility{
				first:  initSet(),
				second: initSet(),
				hidden: initSet(),
			}
		}
		reverseAbilityMapping[ab1].first.add(pokemonName) // push to first set

		// ability 2
		if _, status := reverseAbilityMapping[ab2]; status != true { // ability 2 already not present
			reverseAbilityMapping[ab2] = reverseAbility{
				first:  initSet(),
				second: initSet(),
				hidden: initSet(),
			}
		}
		reverseAbilityMapping[ab2].second.add(pokemonName) // push to second set

		// hidden ability
		if _, status := reverseAbilityMapping[ha]; status != true { // hidden ability already not present
			reverseAbilityMapping[ha] = reverseAbility{
				first:  initSet(),
				second: initSet(),
				hidden: initSet(),
			}
		}
		reverseAbilityMapping[ha].hidden.add(pokemonName) // push to HA set
	}

	return reverseAbilityMapping
}

func (abInfo AbilityInfo) loadAbilityDescriptions() bool {
	var abilities []AbilityDescriptions
	if file, err := os.ReadFile(*(abInfo.filePath)); err == nil {

		if err := json.Unmarshal(file, &abilities); err == nil {

			actualAbilitySet := initSet()

			for _, ab := range abilities {

				actualAbilitySet.add(ab.AbilityName)

				(*abInfo.descriptions)[ab.AbilityName] = AbilityDescriptions{
					AbilityName:        ab.AbilityName,
					AbilityDescription: ab.AbilityDescription,
				}
			}
			*abInfo.listOfActualAbilities = actualAbilitySet.toList()
		}
		return true
	}
	return false
}

func (abInfo AbilityInfo) getAbilityBearer(targetAbility string) (string, AbilityContainer, bool) {

	// fuzzy search for the ability name inside abInfo.listOfAbilities
	abilityNameMatches := FindClosestMatches(targetAbility, *abInfo.listOfAbilities)
	actualAbilityName := (*abInfo.abilityInterMapping)[abilityNameMatches[0]]

	if len(abilityNameMatches) == 0 {
		return "", AbilityContainer{[]string{}, []string{}, []string{}}, false
	}

	if abilityContainer, found := (*abInfo.revmap)[abilityNameMatches[0]]; found == true {
		return actualAbilityName, AbilityContainer{
			first:  abilityContainer.first.toList(),
			second: abilityContainer.second.toList(),
			hidden: abilityContainer.hidden.toList(),
		}, true
	}

	return "", AbilityContainer{[]string{}, []string{}, []string{}}, false
}

// creates a mapping of ability -> Pokemon, will be used in parse_ability_descriptions.go file
// to be called by the ability parse_ability file

func (abInfo AbilityInfo) getDescription(targetAbility string) (string, string, bool) {

	// fuzzy search for the ability name inside abInfo.listOfActualAbilities
	abilityNameMatch, status := FindClosestString(targetAbility, *abInfo.listOfActualAbilities, 5)

	if status == false {
		return "", "", false
	}

	if abilityDesc, found := (*abInfo.descriptions)[abilityNameMatch]; found == true {
		return abilityDesc.AbilityName, abilityDesc.AbilityDescription, true
	}
	return "", "", false
}

func test_fuzzy_abilities() {
	if bs, status := initPokemonStats(); status == true {
		abInfo, _ := initAbilityInfo(bs)

		a, b, c := abInfo.getAbilityBearer("soul hearts")
		fmt.Println(a, b, c)
		a, b, c = abInfo.getAbilityBearer("dauntles shield")
		fmt.Println(a, b, c)
		a, b, c = abInfo.getAbilityBearer("poison touch")
		fmt.Println(a, b, c)
		a, b, c = abInfo.getAbilityBearer("bla ze")
		fmt.Println(a, b, c)
		a, b, c = abInfo.getAbilityBearer("refrigerate")
		fmt.Println(a, b, c)
		a, b, c = abInfo.getAbilityBearer("disguis")
		fmt.Println(a, b, c)

		x, y, z := abInfo.getDescription("soul hearts")
		fmt.Println(x, y, z)
		x, y, z = abInfo.getDescription("dauntles shield")
		fmt.Println(x, y, z)
		x, y, z = abInfo.getDescription("poison touch")
		fmt.Println(x, y, z)
		x, y, z = abInfo.getDescription("bla ze")
		fmt.Println(x, y, z)
		x, y, z = abInfo.getDescription("refrigerate")
		fmt.Println(x, y, z)
		x, y, z = abInfo.getDescription("disguis")
		fmt.Println(x, y, z)

	}
}
