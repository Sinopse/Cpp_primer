#include <iostream>
#include <string>
#include <vector>

int main () {

  int array1[10];
  int array2[];
  std::vector<int> vector;
  
  for(size_t i = 0; i < 10; ++i)
    array1[i] = i;

  for (auto c : array1)
    vector.push_back(c);

  while (!vector.empty()) {
    for (size_t i = 0; i < 10; ++i){
      auto j = vector[i];
      array2[i] = i;
    }
  }

  for (auto c : array2)
    std::cout << c << std::endl;
  
  return 0;
}
