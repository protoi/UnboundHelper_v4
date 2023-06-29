package discord_commands

import (
	"fmt"
	"strings"
	"github.com/diamondburned/arikawa/v3/discord"
	"github.com/diamondburned/arikawa/v3/gateway"
	"github.com/diamondburned/arikawa/v3/session"
)

func Stats(s *session.Session, mce *gateway.MessageCreateEvent, args []string) {

}

func SlashStats(pokemon string) *[]discord.Embed {
	name, pokemon_data, _ := poke_stats.GetStats(strings.TrimSpace(pokemon))

	emb := discord.Embed{Title: name}

	if pokemon_data.Type1 == pokemon_data.Type2 {
		emb.Fields = append(emb.Fields, discord.EmbedField{Name: "Type", Value: pokemon_data.Type1})
	} else {
		emb.Fields = append(emb.Fields, discord.EmbedField{Name: "Types", Value: fmt.Sprintf("%s, %s", pokemon_data.Type1, pokemon_data.Type2)})
	}
	emb.Fields = append(emb.Fields, discord.EmbedField{
		Name: "Stats",
		Value: fmt.Sprintf(`HP: %v
        Attack: %v
        Defense: %v
        Special Attack: %v
        Special Defense: %v
        Speed: %v

        BST: %v`,
			pokemon_data.HP,
			pokemon_data.Attack,
			pokemon_data.Defense,
			pokemon_data.SpAttack,
			pokemon_data.SpDef,
			pokemon_data.Speed,
			(pokemon_data.Attack + pokemon_data.Defense + pokemon_data.SpAttack + pokemon_data.SpDef + pokemon_data.Speed),
		),
	})
	emb.Fields = append(emb.Fields, discord.EmbedField{
		Name: "Abilities",
		Value: fmt.Sprintf(`Ability 1: %s
            Ability 2: %s

            Hidden Ability: %s`,
			pokemon_data.Ability1,
			pokemon_data.Ability2,
			pokemon_data.HiddenAbility),
	})

	var emb_list []discord.Embed
	emb_list = append(emb_list, emb)

	return &emb_list
}
