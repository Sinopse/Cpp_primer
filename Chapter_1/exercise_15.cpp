#include <iostream>

int main ()
{

  int v1 = 0;
  int v2 = 0;
  
  std::cout << "Hello, World" << std::endl;
  std::cin >> v1 >> v2;
  
  std::cout << "The multiplication of ";
  std:: cout << v1 << " and " << v2;
  std::cout << " is ";
  std::cout << v1 * v2 << std::endl;
  
  return 0;
}
