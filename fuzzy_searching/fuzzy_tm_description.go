package fuzzy_searching

import (
	"encoding/json"
	"fmt"
	"os"
	"unbound_helper_v4/utils"
)

type rawTMInfo struct {
	TMNumber   int    `json:"tmnumber"`
	TMName     string `json:"tmname"`
	TMLocation string `json:"tmlocation"`
}
type TmLocAndName struct {
	TmName     string
	TMLocation string
}

type TmLocAndNumber struct {
	TMNumber   int
	TMLocation string
}

type TmLocationData struct {
	NameToNumber *map[string]TmLocAndNumber // tm name -> description + number
	NumberToName *map[int]TmLocAndName
	TmNameList   *[]string
	TmInfoPath   *string
}

func (tmloc TmLocationData) loadMapping() bool {
	if file, err := os.ReadFile(*(tmloc.TmInfoPath)); err == nil {
		// deserialization was a success
		var tempTMList []rawTMInfo

		if err := json.Unmarshal(file, &tempTMList); err == nil {

			tmNameSet := utils.InitSet()

			for _, tmItem := range tempTMList {
				// pushing tm name to list
				tmNameSet.Add(tmItem.TMName)

				(*tmloc.NameToNumber)[tmItem.TMName] = TmLocAndNumber{
					TMNumber:   tmItem.TMNumber,
					TMLocation: tmItem.TMLocation,
				}

				(*tmloc.NumberToName)[tmItem.TMNumber] = TmLocAndName{
					TmName:     tmItem.TMName,
					TMLocation: tmItem.TMLocation,
				}
			}
			*tmloc.TmNameList = tmNameSet.ToList()
			return true
		}
	}
	return false
}

func InitTMLocation() (TmLocationData, bool) {
	locAndName := make(map[int]TmLocAndName)
	locAndNumber := make(map[string]TmLocAndNumber)
	tmpath := "./data generation/temp/DATA/tmlocation.json"
	tmNameList := []string{}

	tmInfo := TmLocationData{
		NameToNumber: &locAndNumber,
		NumberToName: &locAndName,
		TmInfoPath:   &tmpath,
		TmNameList:   &tmNameList,
	}

	if status := tmInfo.loadMapping(); status == true {
		return tmInfo, true
	}
	return TmLocationData{}, false
}

func (tmloc TmLocationData) GetTmInfoFromName(targetTM string) (string, int, string, bool) {
	tmNameMatch, status := utils.FindClosestString(targetTM, *tmloc.TmNameList, 5)

	if status == false {
		return "", 0, "", false
	}

	if tuple, found := (*tmloc.NameToNumber)[tmNameMatch]; found == true {
		return tmNameMatch, tuple.TMNumber, tuple.TMLocation, true
	}
	return "", 0, "", false
}

func (tmloc TmLocationData) GetTmInfoFromNumber(targetTMNumber int) (string, int, string, bool) {

	if tuple, found := (*tmloc.NumberToName)[targetTMNumber]; found == true {
		return tuple.TmName, targetTMNumber, tuple.TMLocation, true
	}
	return "", 0, "", false
}

func Test_fuzzy_tm_location() {
	if tm, status := InitTMLocation(); status {
		fmt.Println("Search through Number")
		a, b, c, d := tm.GetTmInfoFromNumber(10)
		fmt.Println(a, b, c, d)
		a, b, c, d = tm.GetTmInfoFromNumber(24)
		fmt.Println(a, b, c, d)
		a, b, c, d = tm.GetTmInfoFromNumber(102)
		fmt.Println(a, b, c, d)
		a, b, c, d = tm.GetTmInfoFromNumber(-2389)
		fmt.Println(a, b, c, d)
		a, b, c, d = tm.GetTmInfoFromNumber(8439)
		fmt.Println(a, b, c, d)
		a, b, c, d = tm.GetTmInfoFromNumber(0)
		fmt.Println(a, b, c, d)

		fmt.Println("Search through Name")
		p, q, r, s := tm.GetTmInfoFromName("Flame thrower")
		fmt.Println(p, q, r, s)
		p, q, r, s = tm.GetTmInfoFromName("ice beam")
		fmt.Println(p, q, r, s)
		p, q, r, s = tm.GetTmInfoFromName("eqRTHQUAKE")
		fmt.Println(p, q, r, s)
		p, q, r, s = tm.GetTmInfoFromName("drainin kiss")
		fmt.Println(p, q, r, s)
		p, q, r, s = tm.GetTmInfoFromName("googoo gaa gaa")
		fmt.Println(p, q, r, s)
		p, q, r, s = tm.GetTmInfoFromName("djhjhdfjfkhkjsf")
		fmt.Println(p, q, r, s)
	}
}
