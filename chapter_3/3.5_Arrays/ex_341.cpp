#include <iostream>
#include <vector>

int main () {

int int_arr[] = {0, 1, 2, 3, 4, 5};

using std::vector;

vector<int> ivec(std::begin(int_arr), std::end(int_arr));

for (auto c : ivec)
  std:: cout << c << std::endl;

 return 0;
}
