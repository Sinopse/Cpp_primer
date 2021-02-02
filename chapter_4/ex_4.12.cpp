#include <iostream>

int main () {
  int i, j, k;
  i = 2, j = 2, k = 3;

  if (i != j < k) // less than has higher precedence
    std:: cout << "True" << std::endl;
  else
    std:: cout << "False" << std::endl;

  double dval;
  int ival;
  dval = ival = 3.14;

  std::cout << dval << " " << ival << std::endl;
  
  return 0;
}
