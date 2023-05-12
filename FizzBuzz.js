// This calculates if input is a multiple of num and then adds word to output if it is
function modulo(input, num, word){
	if (input % num == 0){
			return word; 
	} else {
			return "";
	}
}

// This loops from 1 to n printing output or num if output is empty
function fizzbuzz(n){
	for (let i = 1; i < n; i++){
			let output = "";
			output += modulo(i,3,"Fizz ");
			output += modulo(i,5,"Buzz ");

			if (output === ""){ 
					console.log(i);
			} else {
					console.log(output);
			}
	}
}

fizzbuzz(25);
