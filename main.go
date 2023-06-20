package main

import "fmt"

var (
	//config     = get_config()
	prefix     = ";"
	poke_stats map[string]interface{}
)

func main() {

	eggmove, status := initEggMoves()
	if status == false {
		return
	}

	if ans, found := eggmove.getEggMoves("mew"); found == true {
		fmt.Println(ans)
	}
	if ans, found := eggmove.getEggMoves("charmander"); found == true {
		fmt.Println(ans)
	}

	if ans, found := eggmove.reverseGetEggMoves("belly drum "); found == true {
		fmt.Println(ans)
	}
	if ans, found := eggmove.reverseGetEggMoves("steel beam"); found == true {
		fmt.Println(ans)
	}
	if ans, found := eggmove.reverseGetEggMoves("telep;ort"); found == true {
		fmt.Println(ans)
	}

	/*lvlup, status := initPokemonLevelUpMoves()
	if status == false {
		return
	}

	if ans, found := lvlup.getLvlUpMoves("mew"); found == true {
		fmt.Println(ans)
	}*/

	/*	tmtutor, status := initPokemonToTMAndTutor()
		if status == false {
			return
		}

		if x, success := tmtutor.getCompatibleTutor("charman der"); success {
			fmt.Println(x)
		}
		if x, success := tmtutor.getCompatibleTM("stakataka"); success {
			fmt.Println(x)
		}
		if x, success := tmtutor.getCompatibleTutor("DRAGONITE "); success {
			fmt.Println(x)
		}
		if x, success := tmtutor.getCompatibleTM("4985894;45;'34';'"); success {
			fmt.Println(x)
		}
	*/
	/*p, status := initPokemonStats()
	if status == false {
		return
	}

	if ans, found := p.getInfo("charmander"); found == true {
		fmt.Println(ans)
		fmt.Println("CHARMANDER")
		fmt.Println(ans.convertToScalemon())
		fmt.Println("END CHARMANDER")

	}
	if ans, found := p.getInfo("CHAR MAND;ER"); found == true {
		fmt.Println(ans)
	}
	if ans, found := p.getInfo("Ho oooh "); found == true {
		fmt.Println(ans)
	}
	if ans, found := p.getInfo("Hooh "); found == true {
		fmt.Println(ans)
	}
	if ans, found := p.getInfo("missing no"); found == true {
		fmt.Println(ans)
	}*/

}
