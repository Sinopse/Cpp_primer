#include <iostream>

int main ()
{
  int i = 42; 
  int *p;       // pointer to int
  int *&r = p;  // r is a reference to p

  r = &i;    // r refers to a pointer, 
  
  std::cout << r << std::endl; // effectively a pointer, points to it
  std::cout << *r << std::endl; // prints the value tow hich the pointer points

  *r = 0; // dereferencing r yields i
  
  std::cout << i << std::endl;
}
 
