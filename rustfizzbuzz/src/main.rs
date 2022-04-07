
// This caculates the if in is a multipule of num and then adds word to output
fn modulo(input: usize,num: usize, word: &str, output: &mut String) {
	if input % num == 0{
		*output = output.to_owned()  + word;
	}
}

// This loops from 1 to n printing output or num if output is empty
fn fizzbuzz(n: usize) -> (){
	for i in 1..n {
		let mut output: String = String::from("");
		
		modulo(i,3,"Fizz ",&mut output);
		modulo(i,5,"Buzz ",&mut output);

		if output != ""{
		println!("{}", output);
		} else {
		println!("{}", i);
		}

	}
}

fn main() {	
	fizzbuzz(25);
}
