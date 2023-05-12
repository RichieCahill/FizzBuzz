#include <cstdint>
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::to_string;

typedef std::uint64_t u64;
typedef std::uint32_t u32;
typedef std::uint16_t u16;
typedef std::uint8_t u8;

typedef std::int64_t i64;
typedef std::int32_t i32;
typedef std::int16_t i16;
typedef std::int8_t i8;

// This loops from 1 to n printing output or num if output is empty
auto fizzbuzz_up_to_n(const u64 n) {
  // reusable empty string
  // reserves enough characters for FizzBuzz
  auto output = string();
  output.reserve(8);

  for (auto i = 1; i <= n; i++) {
    if (i % 3 == 0) {
      output += "Fizz";
    }
    if (i % 5 == 0) {
      output += "Buzz";
    }
    if (output.empty()) {
      output += to_string(i);
    }
    cout << output << "\n";
    output.clear();
  }
}

auto main() -> int {
  fizzbuzz_up_to_n(1000);
  return 0;
}
