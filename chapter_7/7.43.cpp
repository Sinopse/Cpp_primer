#include <iostream>
#include <vector>
#include <string>

class NoDefault {
  int member;
public:
  NoDefault (int i): member(i) {}
};

class C{
  NoDefault c_mem;
public:
  C (NoDefault val): c_mem(val) {} 
  C(): C(0) {}
};

int main()
{
  // std::vector<NoDefault> ndvec(10);
  // std::vector<C> vec(10);

  C c1(42);
  C c2;

  return 0;
}
