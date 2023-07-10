package fuzzy_searching

import (
	"encoding/json"
	"fmt"
	"os"
)

type MoveLearners struct {
	ActualNames       []string
	LvlUpMoveLearners []string
	EggMoveLearners   []string
	TmMoveLearners    []string
	TutorMoveLearners []string
}

func GetMoveLearners(targetMove string, l *PokemonLvlUpMoves, e *PokemonEggMoves, tt *TmTutorMoves) MoveLearners {
	moveNameLvlUp, LvlUpMoveLearners, _ := (*l).ReverseGetLvlUpMoves(targetMove)
	moveNameEggMove, EggMoveLearners, _ := (*e).ReverseGetEggMoves(targetMove)
	moveNameTM, TMMoveLearners, _ := (*tt).ReverseGetCompatibleTM(targetMove)
	moveNameTutor, TutorMoveLearners, _ := (*tt).ReverseGetCompatibleTutor(targetMove)

	return MoveLearners{
		ActualNames:       []string{moveNameLvlUp, moveNameEggMove, moveNameTM, moveNameTutor},
		LvlUpMoveLearners: LvlUpMoveLearners,
		EggMoveLearners:   EggMoveLearners,
		TmMoveLearners:    TMMoveLearners,
		TutorMoveLearners: TutorMoveLearners,
	}
}

func Test_fuzzy_all_moves() {
	if l, status := InitPokemonLevelUpMoves(); status {
		if e, status := InitEggMoves(); status {
			if tt, status := InitPokemonToTMAndTutor(); status {

				var moveNames = []string{"",
					"flame thrower",
					"happy hour",
					"toxic spikes",
					"draining kiss",
					"rhhjkkdjfdkkhg",
					"roost",
					"spikes",
					"drago dance",
					"extreme speed",
				}

				var answer []MoveLearners

				for _, name := range moveNames {
					answer = append(answer, GetMoveLearners(name, &l, &e, &tt))
				}

				// writing the data
				jsonData, _ := json.MarshalIndent(answer, "", " ")

				// thank you chatGPT

				// Create a file to write the JSON data
				file, err := os.Create("./all_moves_data.json")
				if err != nil {
					fmt.Println("Error:", err)
					return
				}
				defer func(file *os.File) {
					err := file.Close()
					if err != nil {
						fmt.Println("oh no !!!!!!")
					}
				}(file)

				// Write the JSON data to the file
				_, err = file.Write(jsonData)
				if err != nil {
					fmt.Println("Error:", err)
					return
				}

			}
		}
	}
}
