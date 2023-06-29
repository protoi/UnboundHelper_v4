package fuzzy_searching

import (
	"unbound_helper_v4/utils"
	"encoding/json"
	"fmt"
	"os"
)

type EggMoves struct {
	EggMoveList []string
}

type ReverseEggMoves struct {
	Pokemons utils.Set
}

type PokemonEggMoves struct {
	eggMoves        *map[string]EggMoves
	reverseEggMoves *map[string]ReverseEggMoves
	listOfPokemons  *[]string
	listOfEggMoves  *[]string
	filePath        *string
}

func initEggMoves() (PokemonEggMoves, bool) {
	eggMoveMap := make(map[string]EggMoves)
	reverseEggMoveMap := make(map[string]ReverseEggMoves)
	listOfPokemons := []string{}
	listOfEggMoves := []string{}

	path := "./data generation/temp/dataextractionnew/egg_moves/egg_moves.json"

	eggmove := PokemonEggMoves{
		eggMoves:        &eggMoveMap,
		reverseEggMoves: &reverseEggMoveMap,
		listOfPokemons:  &listOfPokemons,
		listOfEggMoves:  &listOfEggMoves,

		filePath: &path,
	}

	if status := eggmove.loadEggMoves(); status == true {
		eggmove.reverseMap()
		return eggmove, true
	}
	return PokemonEggMoves{}, false
}

func (eggmove PokemonEggMoves) loadEggMoves() bool {
	// reading successful
	if file, err := os.ReadFile(*(eggmove.filePath)); err == nil {

		tempEggMoves := make(map[string][]string)

		// deserializing successful
		if err := json.Unmarshal(file, &tempEggMoves); err == nil {

			fmt.Println("hello world")

			pokemonNameSet := utils.InitSet()
			eggmoveNameSet := utils.InitSet()

			for name, moves := range tempEggMoves {
				(*eggmove.eggMoves)[name] = EggMoves{EggMoveList: moves}
				pokemonNameSet.Add(name)
				eggmoveNameSet.AddList(moves)
			}

			*eggmove.listOfPokemons = pokemonNameSet.ToList()
			*eggmove.listOfEggMoves = eggmoveNameSet.ToList()

			return true
		}
	}
	return false
}

func (eggmove PokemonEggMoves) reverseMap() {

	//tempReverseMap := make(map[string]utils.Set)

	// convert A -> [1,2] | B -> [1,2,4] ==> 1 -> {A,B} | 2 -> {A,B} | 4 -> {B}
	for pokemonName, eggmoveList := range *(eggmove.eggMoves) {
		for _, moveName := range eggmoveList.EggMoveList {
			// if eggmove name not present, utils.Set it to an empty utils.Set

			// first time seeing this egg move
			if _, found := (*eggmove.reverseEggMoves)[moveName]; found != true {
				//pokemonNameSet := make(map[string]struct{})
				(*eggmove.reverseEggMoves)[moveName] = ReverseEggMoves{Pokemons: utils.InitSet()} // utils.Set{members: &pokemonNameSet}
			}
			// now add the pokemon name to the utils.Set
			(*eggmove.reverseEggMoves)[moveName].Pokemons.Add(pokemonName)
		}
	}
}

// get list of egg moves for a pokemon
func (eggmove PokemonEggMoves) getEggMoves(targetPokemon string) (string, []string, bool) {

	// fuzzy search for the pokemon name inside eggmove.listOfPokemons
	pokemonNameMatches := utils.FindClosestMatches(targetPokemon, *eggmove.listOfPokemons)

	if len(pokemonNameMatches) == 0 {
		return "", []string{}, false
	}

	if eggmoves, found := (*eggmove.eggMoves)[pokemonNameMatches[0]]; found == true {
		return pokemonNameMatches[0], eggmoves.EggMoveList, true
	}

	return "", []string{}, false
}

// returns {actual move name + list of pokemon names} that learn an egg move
func (eggmove PokemonEggMoves) reverseGetEggMoves(targetEggMove string) (string, []string, bool) {

	// fuzzy search for the pokemon name inside eggmove.listOfEggMoves
	eggMoveMatches := utils.FindClosestMatches(targetEggMove, *eggmove.listOfEggMoves)

	if len(eggMoveMatches) == 0 {
		return "", []string{}, false
	}

	if egg_move_set, found := (*eggmove.reverseEggMoves)[eggMoveMatches[0]]; found == true {
		return eggMoveMatches[0], egg_move_set.Pokemons.ToList(), true
	}
	return "", []string{}, false
}

func test_fuzzy_egg_moves() {
	if e, status := initEggMoves(); status == true {
		a, b, c := e.getEggMoves("gasly")
		fmt.Println(a, b, c)

		a, b, c = e.getEggMoves("charmandr")
		fmt.Println(a, b, c)

		a, b, c = e.getEggMoves("togepi")
		fmt.Println(a, b, c)

		x, y, z := e.reverseGetEggMoves("soft boiled")
		fmt.Println(x, y, z)

		fmt.Println((*e.reverseEggMoves)["Soft-Boiled"].Pokemons.ToList())

		x, y, z = e.reverseGetEggMoves("scald")
		fmt.Println(x, y, z)

		x, y, z = e.reverseGetEggMoves("hydro pump")
		fmt.Println(x, y, z)
	}
}