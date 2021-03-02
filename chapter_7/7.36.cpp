#include <iostream>

struct X {
  X (int i, int j): base(i), rem(base % j) {}
  int base, rem;
};

int main()
{
  X x(2, 5);
  
  std::cout << x.base << " " << x.rem << std::endl;

  return 0;
}
