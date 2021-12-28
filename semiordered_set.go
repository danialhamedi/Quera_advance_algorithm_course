package main

import "fmt"

func main() {

	var n int
	fmt.Scan(&n)

	var list []int = make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&list[i])
	}

	count := 0

	for i := 0; i < n; i++ {
		if list[i] != i+1 {
			count++
		}
	}

	if count == 2 {
		fmt.Println("YES")
	}else {
	fmt.Println("NO")
	}

}
