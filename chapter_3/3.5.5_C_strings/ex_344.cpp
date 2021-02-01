#include <iostream>

int main () {

  using std::cout; using std::endl;
  
  constexpr size_t row = 3, col = 4;

  int ia[row][col];

  using int_array = int[4];
  // typedef int int_array[4]; 

  for (int_array *p = ia; p != ia + 3; ++p) {
    for (int *q = *p; q != *p + 4; ++q)
      cout << *q << ' ';
    cout << endl;
  }
  
  return 0;

}
      
