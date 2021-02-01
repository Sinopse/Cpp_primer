#include <iostream>

int main () {

  /* int a = 3, b = 4;
  decltype (a) c = a;
  decltype ((b)) d = a; // reference type int&
  ++c;
  ++d;

  std::cout << a << " "
	    << b << " "
	    << c << " "
	    << d << " "
	    << std::endl;
  */

  int a = 3, b = 4;
  decltype (a) c = a;
  decltype (a = b) d = a;

  d = 5;
  // c = 4;
   
  
  std::cout << c << " " << d << " "
	    << a << " " << b
	    << std::endl;

  // understanding differences between auto and decltype

  const int j = 0, &rj = j;
  decltype(j) x = 42;
  decltype(rj) y = x;
  // y = 48;

  std::cout << x << " "
	    << y << " "
	    << j << " "
	    << std::endl;

  auto z = j;
  auto zx = &rj;

  std::cout << z << " " << zx << std::endl;

  int e = 42;
  int *p = &e;
  decltype(*p) f = e;
  auto g = p;
  
  std::cout << e << " " << *p << " "
	    << f << " " << g 
	    << std::endl;

  
}
