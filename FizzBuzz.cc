#include <iostream>
#include <string>

using namespace std;

// This caculates the if in is a multipule of num and then adds word to output
void modulo(int64_t in, int64_t num, string word, string& output) {
	if (in % num == 0)
		output += word;
}

// This loops from 1 to n printing output or num if output is empty
void fizzbuzz(uint64_t n) {
	for (int64_t i = 1; i <= n ; i++){
		char num[19];
		string output;
		
		modulo(i, 3, "Fizz ", output);
		modulo(i, 5, "Buzz ", output);

		if (output == "") {
				sprintf(num, "%d", i);
				output = num;
		}
		
		cout << output << endl;
		}
}

int main() {
	fizzbuzz(25);
	return 0;
}