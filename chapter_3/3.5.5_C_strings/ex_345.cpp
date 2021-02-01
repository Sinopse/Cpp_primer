#include <iostream>
#include <vector>

int main () {

  using std::cout; using std::endl;
  
  constexpr size_t row = 3, col = 4;

 int ia[row][col];

 for (auto i = 0; i != row; ++i) {
   for (auto j = 0; j != col; ++j)
     cout << ia[i][j] << ' ';
   cout << endl;
 }

  
  return 0;
}
  
  
