#include <iostream>

int main ()
{
  int i = 42;
  int *p1 = &i;
  *p1 = *p1 * *p1; // multiply the values at which the pointer points

  std::cout << *p1 << std::endl;


  int j = 42;
  int *p = &j; // the address of j
  int *ip = p; // a pointer to int

  std::cout << *p << std::endl;
  std::cout << *ip << std::endl;

  int k = 1024;
  int *pk1 = &k;
  int *pk2 = &k;

  // pointers to the same object

  if (pk1 == pk2) {
    std::cout << "True " << pk1 << pk2 << std::endl; // holds the addresses
  }
  else {
  std::cout << "False " << std::endl;
  }

  if (*pk1 == *pk2) {
    std::cout << "True " << *pk1 << *pk2 << std::endl; // holds the values
  }
  else {
  std::cout << "False " << std::endl;
  }

  // unused variable 
  // int *ip1;

}
