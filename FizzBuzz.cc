#include <iostream>
#include <string>

using namespace std;

typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;

typedef int64_t i64;
typedef int32_t i32;
typedef int16_t i16;
typedef int8_t i8;


// This caculates the if in is a multipule of num and then adds word to output
void modulo(u64 in, u64 num, string word, string& output) {
	if (in % num == 0)
		output += word;
}

// This loops from 1 to n printing output or num if output is empty
void fizzbuzz(u64 n) {
	for (u64 i = 1; i <= n ; i++){
		char num[19];
		string output;
		
		modulo(i, 3, "Fizz ", output);
		modulo(i, 5, "Buzz ", output);

		if (output.size() == 0) {
				sprintf(num, "%d", i);
				output = num;
		}
		
		cout << output << endl;
		}
}

int main() {
	fizzbuzz(1000);
	return 0;
}