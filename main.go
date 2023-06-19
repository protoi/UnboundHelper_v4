package main

import "fmt"

var (
	//config     = get_config()
	prefix     = ";"
	poke_stats map[string]interface{}
)

func main() {

	p, status := initPokemonStats()
	if status == false {
		return
	}

	if ans, found := p.getInfo("charmander"); found == true {
		fmt.Println(ans)
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
	}

}
