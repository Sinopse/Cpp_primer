#include <iostream>

int main ()
{
  std::cout << "Declaring variables" << std::endl;
  int num1 = 0, num2 = 0;

  std::cin >> num1 >> num2;

  for (int i = num1; i <= num2; ++i) {
    
    std::cout << "i is "<< i << std::endl;
  }
  return 0;
}
  
