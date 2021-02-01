#include <iostream>
#include <string>
using std::cout; using std::endl;

// Wrire a main function that takes two arguments
// concatenate and print the resulting string

int main(int args, char *str[]) {
  std::string strarg1 = str[1];
  std::string strarg2 = str[2];
  std::string concats = strarg1 + " " + strarg2;

  cout << concats << endl;

  return 0;
}
