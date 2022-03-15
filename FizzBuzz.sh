#!/bin/bash

# This caculates the if $1 is a multipule of $2 and then adds $4 and $3 to Output
modulo() {
	if [ $(("$1"%"$2")) -eq 0 ]; then
		Output="${4}$3"
	fi
}

# This loops from 1 to $1 printing output or num if output is empty
fizzbuzz() {
	for((i=1; i<=$1; i++)); do
		Output=""

		modulo "$i" 3 "Fizz " "$Output"
		modulo "$i" 5 "Buzz " "$Output"
	
		if [[ -z "$Output" ]]; then
  		echo "$i"
		elif [[ -n "$Output" ]]; then
  		echo "$Output"
		fi

	done
}


fizzbuzz 25