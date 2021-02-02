#include <iostream>

 int main () {

   /*
   
  int i = 0, &r = i;
  auto a = r; 

  std::cout << r << std::endl;

  const int ci = i, &cr = i;
  auto b = ci;
  auto c = cr;
  auto d = &i; // d is an int* address of an int obkect is int*
  auto e = &ci; // e is const int* (& of a const obj is low-level const)

  std::cout << b << " "
	    << c << " "
	    << *d << " "
	    << *e << " "
	    << std::endl;

  // to have a top level const -> explicit

  const auto f = ci;

  // a reference to the auto type

  auto &g = ci;

  std::cout << f << " "
	    << g << " "
	    << std::endl;

  a = 42;
  b = 42;
  c = 42;
  //  d = 42; // from int to int*
  e = 42; // from int to const int 
  g = 42; // can't bind a plain reference to a literal 

  std::cout << a << " "
	    << b << " "
	    << c << " "
	    << d << " "
	    << e << " "
	    << g << " "
	    << std::endl;

  const int j = 0, &jr = j;
  auto k = j;
  auto l = jr;
  auto n = &j;

  k = 42;
  l = 42;
  // n = 42;
  
  std::cout << k << " "
	    << l << " "
    // << n << " "
	    << std::endl;

*/

  const int i = 42;
  auto j = i;
  const auto &k = i;
  auto *p = &i;

  const auto j2 = i, &k2 = i;

  std::cout << j << " "
	    << k << " "
	    << p << " "
	    << j2 << " "
	    << k2 << " "
	    << std::endl;

  p = 48;

  std::cout << p << std::endl;

}
