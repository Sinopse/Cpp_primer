#include <iostream>

int fact (int val) {
  int ret = 1;
  while (val > 1) 
    ret *= val--;
  return ret;
}

int main () {
  int val, ans;
  std:: cout << "Provide a number to calculate factorial: " << std::endl;
  std::cin >> val;
  ans = fact(val);

  std::cout << "Factorial of " << val
	    << " is " << ans << std::endl;

  return 0;
}
