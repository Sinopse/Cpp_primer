#include <iostream>
#include <string>

int main () {

  std::string str, prev_str;
  while (std::cin >> str) {
    if (!isupper(str[0])) 	// get another iteration
      continue;
    if (!str.empty() && str == prev_str) {
      std::cout << str << " occurred twice" << std::endl;
      break;
    }
    prev_str = str;		// store previous string
  }
  if (str != prev_str)
    std::cout << "No repetitions" << std::endl;

  return 0;
}
