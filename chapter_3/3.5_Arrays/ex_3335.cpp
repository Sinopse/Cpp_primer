#include <iostream>
#include <string>

int main (void) {

  using std::cout; using std::endl;
  
  char array[10];

  char *p = array;

  for (auto &c: array)
    &c = 0;

  for (auto i: array)
    cout << i << endl;

  return 0;
}
