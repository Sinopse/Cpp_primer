#include <iostream>
#include <string>

int main () {

  using std::string;
  using std::cin; using std::cout; using std::endl;


  char ch;
  string str;
  while (getline(cin, ch)) {
    str += ch;
  }
  
  cout << str << endl;

  return 0;
}
