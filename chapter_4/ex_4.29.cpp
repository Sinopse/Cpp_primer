#include <iostream>

int main () {

  using std::cout; using std::endl;
  
  int x[10];
  int *p = x;

  cout << sizeof(x)/sizeof(*x) << endl; // size of an array
  cout << sizeof(p) << endl;		// size of a pointer (blocks of memory)
  cout << sizeof(*p) << endl;		// size of an obj to which the pointer points
  cout << sizeof(p)/sizeof(*p) << endl;

  return 0;
}
  
