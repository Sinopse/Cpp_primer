#include <iostream>

int main ()
{
  //  int i = 0, &r1 = i;
  double d = 0, &r2 = d;

  r2 = 3.14159; // so the reference actually assigns the passed value to d
  //  r2 = r1;
  // i = r2;
    //   r1 = d;

   //std::cout << r1 << std::endl;
  std::cout << r2 << std::endl;
  //  std::cout << i << std::endl;
  std::cout << d << std::endl;

  int i, &ri = i;
  i = 5;
  ri = 10;

  std::cout << i << " " << ri << std::endl;

  double ival = 1.01; // cannot bind int to double
  int &rval2 = ival;

  std::cout << rval2 << std::endl;

}
