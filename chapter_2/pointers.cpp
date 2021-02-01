#include <iostream>

int main ()
{

  // deaclaring a pointer which points to double
  
  double pi = 3.14;
  double *p1 = &pi; // p1 points to a double
  double *p2 = p1; // initializing a new pointer p2 which points at p1
    
  std::cout << *p1 << " \n"
	    << *p2 << std::endl;

  *p2 = 3.14159; // new value to the pointer p2
  double *p3;
  p3 = p2; // assign the value of p2 to p3; they address the same object

std::cout << *p2 << " \n"
	    << *p3 << std::endl;

 *p3 = 6.28; // we assign a new value to p2 through p3

 std::cout << *p2 << " \n"
	    << *p3 << std::endl;

 //a quicke reference from pointers to pointers
 
 int i = 42;
 int *p4;
 int *&r = p4; // is a reference to pointer pn4

 r = &i; // p4 now points to i, & address of 
 *p4 = 0;

 std::cout << i << " " 
	   << *r << " " 
	   << *p4 << std::endl;
 

 // reference to const

 const int ci = 1024;
 const int &ref = ci;

 std::cout << ci << " " 
	   << ref  << std::endl;
 
 int j = 84;
 const int &ref1 = j;  // a const int binds to int
 const int &ref2 = 42; 

  std::cout << j << " " 
	   << ref1 << " " 
	   << ref2 << std::endl;

  int k = 42;
  int &ref3 = k;
  const int &ref4 = k; // bound to k but cannot change k
  ref3 = 0;

  std::cout << k << " " 
	    << ref3 << " " 
	    << ref4 << std::endl;

  // pointers and const

  const double pi3 = 3.14159;
  const double *ptr = &pi3;

  std::cout << pi3 << " " << *ptr << std::endl;

  double dval = 3.14;
  ptr = &dval;

  std::cout << pi3 << " " 
	    << dval << " " 
	    << *ptr << std::endl;

  int errNumb = 0;
  int *const currErr = &errNumb;
  *currErr = 42;
  // currErr = &k;
  int *p5 = &k;
  
  std::cout << errNumb
	    << *currErr
	    << *p5
	    << std::endl;
  
  
}
