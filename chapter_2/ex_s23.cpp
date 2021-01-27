#include <iostream>

int main ()
{
  int p = 3;
  int *pi = &p;
  int &pir = p;
  
  std::cout << p << " is equal "
	    << *pi 
	    << " and referenced to "
	    << pir << std::endl;


  /*  int i = 42;
  int *pi1 = 0;
  int *pi2 = &i;
  int *pi3;

  pi3 = pi2;
  pi2 = 0;

  std::cout << *pi1 << " and "
	    << *pi3 << " and "
	    << *pi2 << std::endl; */

  int i = 0;
  // double* dp = &i; // this is illegal because initializing double to int
  int* d = &i; //erroneous declaration
  
  std::cout << *d << std::endl;

  // compound type declarations

  int k = 42;
  int *p2;
  int *&r = p2; // r is a reference to the pointer p2

  int &ref = k;

  std::cout << r
	    << " " << ref << std::endl; // printing the reference k 
  
  r = &k;

  std::cout << *r << std::endl;
    
  *r = 0;

  //  const int buf; //uninitialized const

  int cnt = 0;
  const int sz = cnt;
  //  ++sz; // declared const
  ++cnt;
  
  std::cout << sz << std::endl;
  std::cout << cnt << std::endl;

}
