#include <iostream>
#include <vector>

// write a recursive function to print out contensts of a vector

int print_vec(std::vector<int> veci, size_t idx) {
  auto end = veci.end();
  int elem = veci[idx];
  if (elem != *end) {
    std::cout << elem << std::endl;
    ++idx;
    return print_vec(veci, idx);
  }
  return 0;
}

int main() {
  std::vector<int> veci(10, 1);

  print_vec(veci, 0);
  return 0;
}
    
