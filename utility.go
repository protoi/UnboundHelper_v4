package main

type PokeStats struct {
	HP        int
	Attack    int
	Defense   int
	SpAttack  int
	SpDefense int
	Speed     int
	BST       int
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

func StatToScalemon(BST, HP, stat int) int {
	return stat * (600 - HP) / (BST - HP)
}
