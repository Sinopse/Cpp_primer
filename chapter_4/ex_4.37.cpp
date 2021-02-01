#include <iostream>
#include <string>

using std::string;

int main() {

  int i;
  double d;
  const string *ps;
  char *pc;
  void *pv;

  // pv = (void*)ps;
  pv = const_cast<string*>(ps); // we can store any type in the void pointer

  // i = int(*pc)
  i = static_cast<int>(*pc);

  pv = &d; // cast not needed address can be stores in void*
  
  // pc = (char*) pv;
  pc = static_cast<char*>(pv);

  std::cout << i << std::endl;

  return 0;
}
