#include <iostream>
#include "6.54.h"

int addInts(int a, int b)
{
  int ans = a + b;
  return ans;
}

int subInts(int a, int b)
{
  int ans = a - b;
  return ans;
}

int multInts(int a, int b)
{
  int ans = a * b;
 return ans;
}

int divInts(int a, int b)
{
  if (!b)
    throw std::runtime_error("zero division");
  int ans = a / b;
 return ans;
}
