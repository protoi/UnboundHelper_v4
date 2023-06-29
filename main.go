package main

import (
	"fmt"
	"runtime"
)

var (
	//config     = get_config()
	prefix     = ";"
	poke_stats map[string]interface{}
)

func main() {

	fmt.Println("OLD")
	PrintMemUsage()

	//test_fuzzy_egg_moves()
	//test_fuzzy_base_stats()
	//test_fuzzy_lvl_up_moves()
	//test_fuzzy_tm_tutor_moves()
	test_fuzzy_abilities()
	/*	abd, status := initAbilityDesc()

		if status == false {
			return
		}

		if ans, found := abd.getDescription("synchronize"); found == true {
			fmt.Println(ans)
		}
		if ans, found := abd.getDescription("magic g u a r d"); found == true {
			fmt.Println(ans)
		}
		if ans, found := abd.getDescription("b l AZE"); found == true {
			fmt.Println(ans)
		}
		if ans, found := abd.getDescription("gale wings"); found == true {
			fmt.Println(ans)
		}
		if ans, found := abd.getDescription("crabby tactics"); found == true {
			fmt.Println(ans)
		}
	*/
	/*	mi, status := initMoveInfo()
		if status == false {
			return
		}

		if ans, found := mi.getInfo("close combat"); found == true {
			fmt.Println(ans)
		}
		if ans, found := mi.getInfo("flame thrower"); found == true {
			fmt.Println(ans)
		}

		if ans, found := mi.getInfo("sdjfhsfhksdf"); found == true {
			fmt.Println(ans)
		}
		if ans, found := mi.getInfo("springtide storm"); found == true {
			fmt.Println(ans)
		}
		if ans, found := mi.getInfo("telep;ort"); found == true {
			fmt.Println(ans)
		}*/

	/*	eggmove, status := initEggMoves()
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
	*/
	/*	lvlup, status := initPokemonLevelUpMoves()
		if status == false {
			return
		}

		if ans, found := lvlup.getLvlUpMoves("mew"); found == true {
			fmt.Println(ans)
		}
		if ans, found := lvlup.getLvlUpMoves("MACHAMP"); found == true {
			fmt.Println(ans)
		}
		if ans, found := lvlup.getLvlUpMoves("CHar --- mander"); found == true {
			fmt.Println(ans)
		}
		if ans, found := lvlup.getLvlUpMoves("behenchod"); found == true {
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
		}*/

	/*p, status := initPokemonStats()
	if status == false {
		return
	}

	rev := initReverseAbilityMapping(p)

	fmt.Println(rev.getAbilityBearer("blaze"))
	fmt.Println(rev.getAbilityBearer("gale wings"))
	fmt.Println(rev.getAbilityBearer("synchro nize"))
	fmt.Println(rev.getAbilityBearer("GRIMNEIGH"))*/

	//if ans, found := p.getInfo("charmander"); found == true {
	//	fmt.Println(ans)
	//	fmt.Println("CHARMANDER")
	//	fmt.Println(ans.convertToScalemon())
	//	fmt.Println("END CHARMANDER")
	//
	//}
	//if ans, found := p.getInfo("CHAR MAND;ER"); found == true {
	//	fmt.Println(ans)
	//}
	//if ans, found := p.getInfo("Ho oooh "); found == true {
	//	fmt.Println(ans)
	//}
	//if ans, found := p.getInfo("Hooh "); found == true {
	//	fmt.Println(ans)
	//}
	//if ans, found := p.getInfo("missing no"); found == true {
	//	fmt.Println(ans)
	//}

	fmt.Println("NEW")
	PrintMemUsage()
	runtime.GC()

	fmt.Println("NEW AFTER GC")
	PrintMemUsage()

}

func PrintMemUsage() {
	var m runtime.MemStats
	runtime.ReadMemStats(&m)
	// For info on each, see: https://golang.org/pkg/runtime/#MemStats
	fmt.Printf("Alloc = %v MiB", bToMb(m.Alloc))
	fmt.Printf("\tTotalAlloc = %v MiB", bToMb(m.TotalAlloc))
	fmt.Printf("\tSys = %v MiB", bToMb(m.Sys))
	fmt.Printf("\tNumGC = %v\n", m.NumGC)
}

func bToMb(b uint64) uint64 {
	return b / 1024 / 1024
}
