package utils

type Set struct {
	members *map[string]struct{}
}

func InitSet() Set {
	temp := map[string]struct{}{}

	return Set{
		members: &temp,
	}
}

// add a list to the set
func (set Set) AddList(items []string) {
	for _, item := range items {
		(*set.members)[item] = struct{}{}
	}
}

// add item to set
func (set Set) Add(item string) {
	(*set.members)[item] = struct{}{}
}

// check if item present in set
func (set Set) Contains(item string) bool {
	if _, status := (*set.members)[item]; status {
		return true
	}
	return false
}

func (set Set) ToList() []string {
	if set.members == nil {
		return []string{}
	}
	list := make([]string, 0, len(*(set.members)))
	for key := range *(set.members) {
		list = append(list, key)
	}
	return list
}

func (set Set) Remove(key string) {
	if _, status := (*set.members)[key]; status {
		delete(*set.members, key)
	}
}
