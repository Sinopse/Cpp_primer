#include <iostream>

int main (void) {

  int expr = ((((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2));

  std::cout << expr << std::endl;

  int expr1 = 30 / 3 * 21 % 5;

  std::cout << expr1 << std::endl;

  int expr2 = -30 / 3 * 21 % 4;

  std::cout << expr2 << std::endl;
  
  return 0;
}
