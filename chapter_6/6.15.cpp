#include <iostream>

char change_char(char &ch) {
  ch = 'a';
  return ch;
}

int main() {
  // try with a reference to string
  char c = 'i';

  std::cout << c << std::endl;
  change_char(c);

  std::cout << c << std::endl;
  
  return 0;
}
