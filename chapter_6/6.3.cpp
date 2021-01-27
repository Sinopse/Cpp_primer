#include <iostream>

int fact (int val) {
  int ret = 1;
  while (val > 1) 
    ret *= val--;
  return ret;
}

int main () {
  int val = 5, ans;
  ans = fact(val);

  std::cout << "Factorial of " << val
	    << " is " << ans << std::endl;

  return 0;
}
