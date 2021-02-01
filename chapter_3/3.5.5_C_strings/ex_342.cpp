#include <iostream>
#include <vector>

int main () {

  using std::vector;

  vector<int> v1 = {0, 1, 2, 3, 4, 5};


  constexpr size_t size = 6;
  int int_arr[size];

  int  *p = int_arr;
  
  for (auto c : v1) {
    *p = c;
    ++p;
}
      
  for (auto c : int_arr)
    std::cout << c << std::endl;

  return 0;
}
  
  
