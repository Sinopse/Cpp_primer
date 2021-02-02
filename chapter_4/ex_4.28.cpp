#include <iostream>
#include <string>

int main () {

  using std::cout; using std::endl;

  cout << sizeof(int) << " "
       << sizeof(char) << " "
       << sizeof(long) << " "
       <<sizeof(double) << " "
       << sizeof(std::string) << " "
       << endl;

  return 0;
}
