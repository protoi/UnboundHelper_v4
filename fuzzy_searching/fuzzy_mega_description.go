package fuzzy_searching

import (
	"encoding/json"
	"fmt"
	"os"
	"unbound_helper_v4/utils"
)

type rawMegaInfo struct {
	MegaName     string `json:"name"`
	MegaLocation string `json:"location"`
}

type MegaLocationData struct {
	MegaMapping  *map[string]string // mega stone name -> location
	MegaNameList *[]string
	MegaInfoPath *string
}

func (megaloc MegaLocationData) loadMapping() bool {
	if file, err := os.ReadFile(*(megaloc.MegaInfoPath)); err == nil {
		// deserialization was a success
		var tempMegaList []rawMegaInfo

		if err := json.Unmarshal(file, &tempMegaList); err == nil {

			megaNameSet := utils.InitSet()

			for _, megaItem := range tempMegaList {
				(*megaloc.MegaMapping)[megaItem.MegaName] = megaItem.MegaLocation

				// pushing mega stone name to list
				megaNameSet.Add(megaItem.MegaName)
			}
			*megaloc.MegaNameList = megaNameSet.ToList()
			return true
		}
	}
	return false
}

func InitMegaLocation() (MegaLocationData, bool) {
	megaMapping := make(map[string]string)
	megapath := "./data generation/temp/DATA/megastone.json"
	megaNameList := []string{}

	megaInfo := MegaLocationData{
		MegaMapping:  &megaMapping,
		MegaNameList: &megaNameList,
		MegaInfoPath: &megapath,
	}

	if status := megaInfo.loadMapping(); status == true {
		return megaInfo, true
	}
	return MegaLocationData{}, false
}

func (megaloc MegaLocationData) GetMegaInfoFromName(targetMegaStone string) (string, string, bool) {
	megaNameMatch, status := utils.FindClosestString(targetMegaStone, *megaloc.MegaNameList, 5)

	if status == false {
		return "", "", false
	}

	if megaLocation, found := (*megaloc.MegaMapping)[megaNameMatch]; found == true {
		return megaNameMatch, megaLocation, true
	}
	return "", "", false
}

func Test_fuzzy_mega_location() {
	if m, status := InitMegaLocation(); status {
		fmt.Println("Search through Name")
		a, b, c := m.GetMegaInfoFromName("metagrossite")
		fmt.Println(a, b, c)
		a, b, c = m.GetMegaInfoFromName("medicham")
		fmt.Println(a, b, c)
		a, b, c = m.GetMegaInfoFromName("mewtwo x")
		fmt.Println(a, b, c)
		a, b, c = m.GetMegaInfoFromName("mewtowo y")
		fmt.Println(a, b, c)
		a, b, c = m.GetMegaInfoFromName("charizarrdite y")
		fmt.Println(a, b, c)
		a, b, c = m.GetMegaInfoFromName("charizardite y")
		fmt.Println(a, b, c)
	}
}
