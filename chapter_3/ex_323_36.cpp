#include <iostream>

using std::cin; using std::cout; using std::endl; using std::string;

int main () {

  string string("Hello!");

  // using referennce to assign to s
  for (auto &c : string) {
    c = 'X';
  }

  cout << string << endl;
  return 0;
  
}
