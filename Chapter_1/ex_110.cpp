#include <iostream>

int main () {
  int num, val;

  std::cin >> num >> val;

  while (num >= val) {
    std::cout << "Printing out " << num
	      << " on each iteration" << std::endl;
    --num;
  }

  //  std::cout << "The sum of " << nums - val <<
  //" numbers is " << sum << std::endl;

  return 0;
}
