#include <iostream>
#include <vector>

int main () {

  std::vector<int> ivec;

  for (int i = 0; i != 10; ++i)
    ivec.push_back(i);

  for (auto c : ivec)
    std::cout << ((c % 2 != 0) ? c*c : c) << std::endl;

  
  return 0;
}
  
