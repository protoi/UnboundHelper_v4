package fuzzy_searching

import (
	"encoding/json"
	"fmt"
	"os"
	"unbound_helper_v4/utils"
)

type rawZInfo struct {
	ZName     string `json:"name"`
	ZLocation string `json:"location"`
}

type ZLocationData struct {
	ZMapping  *map[string]string // z move name -> location
	ZNameList *[]string
	ZInfoPath *string
}

func (zloc ZLocationData) loadMapping() bool {
	if file, err := os.ReadFile(*(zloc.ZInfoPath)); err == nil {
		// deserialization was a success
		var tempZList []rawZInfo

		if err := json.Unmarshal(file, &tempZList); err == nil {

			zNameSet := utils.InitSet()

			for _, zItem := range tempZList {
				// pushing tm name to list
				(*zloc.ZMapping)[zItem.ZName] = zItem.ZLocation
				zNameSet.Add(zItem.ZName)
			}
			*zloc.ZNameList = zNameSet.ToList()
			return true
		}
	}
	return false
}

func InitZLocation() (ZLocationData, bool) {
	zMapping := make(map[string]string)
	zpath := "./data generation/temp/DATA/zlocation.json"
	zNameList := []string{}

	zInfo := ZLocationData{
		ZMapping:  &zMapping,
		ZNameList: &zNameList,
		ZInfoPath: &zpath,
	}

	if status := zInfo.loadMapping(); status == true {
		return zInfo, true
	}
	return ZLocationData{}, false
}

func (zloc ZLocationData) GetZInfoFromName(targetZMove string) (string, string, bool) {
	zNameMatch, status := utils.FindClosestString(targetZMove, *zloc.ZNameList, 5)

	if status == false {
		return "", "", false
	}

	if zLocation, found := (*zloc.ZMapping)[zNameMatch]; found == true {
		return zNameMatch, zLocation, true
	}
	return "", "", false
}

func Test_fuzzy_z_location() {
	if z, status := InitZLocation(); status {
		fmt.Println("Search through Name")
		a, b, c := z.GetZInfoFromName("marshadium z")
		fmt.Println(a, b, c)
		a, b, c = z.GetZInfoFromName("lunalium ")
		fmt.Println(a, b, c)
		a, b, c = z.GetZInfoFromName("solgaliom")
		fmt.Println(a, b, c)
		a, b, c = z.GetZInfoFromName("ultr nectrozmium")
		fmt.Println(a, b, c)
		a, b, c = z.GetZInfoFromName("pikachunium")
		fmt.Println(a, b, c)
		a, b, c = z.GetZInfoFromName("pikanim")
		fmt.Println(a, b, c)
	}
}
