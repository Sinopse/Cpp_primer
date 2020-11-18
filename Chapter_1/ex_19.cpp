#include <iostream>

int main () {
  int sum = 0, val , nums;

  std::cin >> val >> nums;

  while (val >= nums) {
    sum +=val;
    --val;
  }

  std::cout << "The sum of " << nums - val <<
    " numbers is " << sum << std::endl;

  return 0;
}
