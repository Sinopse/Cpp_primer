#include <iostream>
#include "Chapter6.h"

int main () {
  int val, ans;
  std:: cout << "Provide a number to calculate factorial: " << std::endl;
  std::cin >> val;
  ans = fact(val);

  std::cout << "Factorial of " << val
	    << " is " << ans << std::endl;

  return 0;
}
