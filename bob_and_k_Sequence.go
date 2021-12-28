package main

import "fmt"

func main() {
	var n, k int
	fmt.Scan(&n, &k)
	list_numbers := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&list_numbers[i])
	}
	var min_operation int
	for i := range list_numbers {
		operator_count := 0
		for j := range list_numbers {
			sub_operation := list_numbers[j] - list_numbers[i] + (i-j)*k
			if sub_operation < 0 {
				sub_operation = -sub_operation
			}
			operator_count += sub_operation
		}
		if i == 0 {
			min_operation = operator_count
		} else if min_operation > operator_count {
			min_operation = operator_count
		}
	}
	fmt.Println(min_operation)
}
