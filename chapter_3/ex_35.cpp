#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

int main () {

  string string1;
  string string2;

  if (cin >> string1) {

    while (cin >> string2) {
      string1 = string1 + " " + string2;
    }
  }
  cout << string1 << endl;
  return 0;
}
