#include <iostream>
#include "Sales_item.h"

int main ()
{
  Sales_item item1;
  
  while (std::cin >> item1) {
    Sales_item next;
    next += item1;
  }

  std::cout << item1 << std::endl;
  
  return 0;
}
