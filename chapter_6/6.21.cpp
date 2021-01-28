// write a fucntion that takes an int and a pointer to an int
// and returns the larger of the int value or the value to which the pointer points

#include <iostream>

int compare(int i, int *pi) {
  if (i > *pi)
    return i;
  return *pi;
}

int main() {
  int i = 42;
  int j = 48;

  std::cout << compare(i, &j) << std::endl;
  return 0;
}
