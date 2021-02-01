#include <iostream>
#include <string>

int main (void) {

  using std::cout; using std::endl;

  constexpr size_t size = 10;
  int array[size];

  for (int *p = 0; p < array + size; ++p) {
    *p = 0;
  }
  
  for (auto i: array)
    cout << i << endl;

  return 0;
}
