package main

import (
	"fmt"
	"log"
)

type PokeStats struct {
	HP        float64
	Attack    float64
	Defense   float64
	SpAttack  float64
	SpDefense float64
	Speed     float64
	BST       float64
}

func ToScalemon(ps PokeStats) PokeStats {
	var new_ps PokeStats
	new_ps.Attack = StatToScalemon(ps.BST, ps.HP, ps.Attack)
	new_ps.Defense = StatToScalemon(ps.BST, ps.HP, ps.Defense)
	new_ps.SpAttack = StatToScalemon(ps.BST, ps.HP, ps.SpAttack)
	new_ps.SpDefense = StatToScalemon(ps.BST, ps.HP, ps.SpDefense)
	new_ps.Speed = StatToScalemon(ps.BST, ps.HP, ps.Speed)
	return new_ps
}

func StatToScalemon(BST, HP, stat float64) float64 {
	return stat * (600 - HP) / (BST - HP)
}

func GetStats(pokemon string) PokeStats {
	// pokemon = strings.ToLower(pokemon)
	var ps PokeStats
	// Getting the json version of the stats for this pokemon from the poke_stats variable in main.go
	json_stats := poke_stats[pokemon]
	// Converting the json stats to a map
	stats, ok := json_stats.(map[string]interface{})
	// If not okay return an empty struct and warn
	if !ok {
		log.Println(fmt.Sprintf("WARNING could not get pokemon %s", pokemon))
		return ps
	}
	// Setting all the stats
	ps.HP = stats["HP"].(float64)
	ps.Attack = stats["Attack"].(float64)
	ps.Defense = stats["Defense"].(float64)
	ps.SpAttack = stats["SpAttack"].(float64)
	ps.SpDefense = stats["SpDef"].(float64)
	ps.Speed = stats["Speed"].(float64)
	ps.BST = (ps.HP + ps.Attack + ps.Defense + ps.SpAttack + ps.SpDefense + ps.Speed)
	return ps
}
