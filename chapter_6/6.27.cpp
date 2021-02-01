// write a function that takes an initializer list
// and produce the sum of the elements in the list

#include <iostream>

void sum_initializer(std::initializer_list<int> ili) {
  int sum;
  for (auto elem : ili) 
    sum += elem;

  std::cout << sum << std::endl;
}

int main() {
  sum_initializer({1, 2, 3, 4, 5});

  return 0;
}
