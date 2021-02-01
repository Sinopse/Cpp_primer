#include <iostream>

int main () {

  int j, i;
  j = 10;
  i = 4;

  double slope = static_cast<double>(j / i);

  std::cout << slope << std::endl;

  return 0;
}
