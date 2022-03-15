
// This loops from 1 to n checks if it a multiple of 15 5 or 3 and prints Fizz Buzz, Fizz or Buzz respectively or i if int not
fn fizzbuzz(n: u64) -> (){
	for i in 1..n {

		if i % 15 == 0{
			println!("Fizz Buzz");
		} else if i % 3 == 0{
			println!("Fizz");
		} else if i % 5 == 0{
			println!("Buzz");
		} else {
		println!("{}", i);
		}

	}
}

fn main() {	
	fizzbuzz(25);
}
