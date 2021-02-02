#include <iostream>

int main() {

  int someValue = 5;
  int x, y = 0;

  someValue ? ++x, ++y  : (--x, --y);

  std::cout << x << std::endl;
  std::cout << y << std::endl;
  
  return 0;
}
