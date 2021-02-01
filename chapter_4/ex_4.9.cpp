#include <iostream>

int main () {
  const char *cp = "Hello World";

  if (cp && *cp)
    // std::cout << cp << std::endl;
    printf("string: %c\n", *cp);

  return 0;
}
