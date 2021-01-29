#include <iostream>

// explicitly passing a size patameter
void print(const int arr[], size_t size, int i) {
  for (i; i != size; ++i)
    std::cout << arr[i] << std::endl;
}

// array reference parameters
void print_ref(const int (&arr)[2]) { // explicitly pass the size
  for (auto c : arr)
    std::cout << c << std::endl;
}

// using iterators
void print_iter(const int *beg, const int *end) {
  while(beg != end)
    std::cout << *beg++ << std::endl;
}


int main() {
  int i = 0;
  int j[2] = {0, 1};

  //print(j, 2, i);
  //alternatively
  print(j, std::end(j) - std::begin(j), i);
  print_ref(j);
  print_iter(std::begin(j), std::end(j));
  
  return 0;
}
