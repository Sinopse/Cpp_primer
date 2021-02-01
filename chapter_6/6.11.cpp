#include <iostream>

void reset(int &i) {
  i = 0;
}

int main() {
  int num = 42;
  reset(num);

  std::cout << "num = " << num << std::endl;

  return 0;
}
