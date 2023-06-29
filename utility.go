package main

import (
	"fmt"
	"github.com/lithammer/fuzzysearch/fuzzy"
	"sort"
	"strings"
)

type str_and_dist struct {
	dist int
	str  string
}

func PowersOfTwoSum(n int) []int {
	var result []int
	isolator := 1

	for i := 0; isolator <= n; i++ {
		isolatedVal := n & isolator
		isolator = isolator << 1
		if isolatedVal != 0 {
			result = append(result, isolatedVal)
		}
	}
	return result
}

// FindClosestString returns false if minimum levenshtein distance was greater than threshold
func FindClosestString(target string, list []string, threshold int) (string, bool) {
	targetLower := strings.ToLower(target)
	currentMinStr, currentMinDist := "", 100

	for _, str := range list {
		strLower := strings.ToLower(str)
		distance := fuzzy.LevenshteinDistance(strLower, targetLower)
		if distance > threshold {
			continue
		}

		if distance < currentMinDist {
			currentMinDist = distance
			currentMinStr = str
		}
	}

	if currentMinDist == 100 {
		return "", false
	}
	return currentMinStr, true
}

func FindClosestMatches(target string, list []string) []string {
	targetLower := strings.ToLower(target)
	matches := make([]str_and_dist, 0)

	for _, str := range list {
		strLower := strings.ToLower(str)
		distance := fuzzy.LevenshteinDistance(strLower, targetLower)
		matches = append(matches, str_and_dist{
			distance, str,
		})
	}

	sort.Slice(matches, func(i, j int) bool { // TODO: https://pkg.go.dev/container/heap use a heap inplace of this

		return matches[i].dist < matches[j].dist
	})

	closestMatches := make([]string, 0)
	for i := 0; i < len(matches) && i < 5; i++ {
		closestMatches = append(closestMatches, matches[i].str)
	}

	return closestMatches
}

func testLevenshteinDistance() {
	list := []string{
		"Mirror Move", "Peck", "Foresight", "Future Sight", "Nasty Plot",
		"Psycho Shift", "Lucky Chant", "Extrasensory", "Secret Power",
		"Stored Power", "Morning Sun", "Bestow", "Soft-Boiled",
	}

	target := "soft boil"

	closestMatches := FindClosestMatches(target, list)
	fmt.Println("Closest matches:", closestMatches)
}
