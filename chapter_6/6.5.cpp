#include <iostream>

int main () {
  std::cout << "Provide a number: " << std::endl;
  int val;
  std:: cin >> val;

  if (val < 0)
    std::cout << val * -1 << std::endl;
  else
    std::cout << val << std::endl;

}
