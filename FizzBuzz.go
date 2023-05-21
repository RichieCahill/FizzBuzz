package main

import (
	"fmt"
)

// This calculates if input is a multiple of num and then adds word to output if it is
func modulo(input, num int, word string) string {
	if input%num == 0 {
		return word
	} else {
		return ""
	}
}

// This loops from 1 to n printing output or num if output is empty
func fizz_buzz(n int) {
	for i := 1; i < n; i++ {
		output := ""
		output += modulo(i, 3, "Fizz ")
		output += modulo(i, 5, "Buzz ")

		if output == "" {
			fmt.Println(i)
		} else {
			fmt.Println(output)
		}
	}
}

func main() {
	fizz_buzz(25)
}
