package main

type Set struct {
	members *map[string]struct{}
}

func initSet() Set {
	temp := map[string]struct{}{}

	return Set{
		members: &temp,
	}
}

// add item to set
func (set Set) add(item string) {
	(*set.members)[item] = struct{}{}
}

// check if item present in set
func (set Set) contains(item string) bool {
	if _, status := (*set.members)[item]; status {
		return true
	}
	return false
}

func (set Set) toList() []string {
	if set.members == nil {
		return []string{}
	}
	list := make([]string, 0, len(*(set.members)))
	for key := range *(set.members) {
		list = append(list, key)
	}
	return list
}

func (set Set) remove(key string) {
	if _, status := (*set.members)[key]; status {
		delete(*set.members, key)
	}
}
