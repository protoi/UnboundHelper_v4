package main

import (
	"unbound_helper_v4/data_loading"
)

func ToScalemon(ps data_loading.PokemonBaseStat) data_loading.PokemonBaseStat {
	BST := ps.Attack + ps.Defense + ps.SpAttack + ps.SpDef + ps.Speed
	var new_ps data_loading.PokemonBaseStat
	new_ps.Attack = StatToScalemon(BST, ps.HP, ps.Attack)
	new_ps.Defense = StatToScalemon(BST, ps.HP, ps.Defense)
	new_ps.SpAttack = StatToScalemon(BST, ps.HP, ps.SpAttack)
	new_ps.SpDef = StatToScalemon(BST, ps.HP, ps.SpDef)
	new_ps.Speed = StatToScalemon(BST, ps.HP, ps.Speed)
	return new_ps
}

func StatToScalemon(BST, HP, stat int) int {
	return stat * (600 - HP) / (BST - HP)
}
