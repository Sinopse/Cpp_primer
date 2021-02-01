#include <iostream>

using std::cout; using std::endl;

int call_func () {
  static size_t ctr = 0;

  if (ctr == 0) {
    ctr++;
    return 0;
  }
  return ctr++;
}

int main () {

  for (int i = 0; i < 10; i++) 
    cout << "Called " << call_func() << endl;

  return 0;
}
  
