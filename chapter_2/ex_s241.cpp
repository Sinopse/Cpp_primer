#include <iostream>

int main ()
{
  const int ci = 1024;
  const int &r1 = ci;
  // r1 = 42; // not allowed
  // int &r2 = ci; // non const to const obj

  std::cout << r1 << std::endl;


  // pointers and const

  const double pi = 3.14;
  // double *ptr = &pi; // nott allowed
  const double *cptr = &pi; // okay because points to a double that is const

  // but we can use a pointer to point to a nonconst obj

  double pi2 = 3.14;
  cptr = &pi2;

  //const pointers

  int errNumb = 0;
  int *const curErr = &errNumb;

  const double pi3 = 3.14159;
  const double *const pip = &pi3; // const pointer to a const obj

  *curErr = 5;

  std::cout << *pip  << std::endl;
  std::cout << errNumb << std::endl;

  // ex section 2.4.2

  //  int i = -1, &r = 0; // you cannot bind a refrence to a value 

  int i2 = 42;
  int *const p2 = &i2; // this declaration  is okay
  *p2 = 5;

  std::cout << *p2 << std::endl;

  // const int &const r2;

  int i = 42;
  const int i3 = i, &r = i; // you can define a reference to a const object
  std::cout << r << i3 << std::endl;


  // 2.28

  //  int i, *const cp; // const pointer must be initialized like any other const object

  // const int ic, &j = ic;
  
  int null = 0;
  constexpr int *k = &null; // pointer to null is not a constant expression
  
  std::cout << *k  << std::endl;

}
