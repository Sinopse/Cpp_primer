#include <iostream>
#include <string>

using std::cin; using std::cout;
using std::endl;
using std::string;

int main() {

  const string s = "Keep out!";
  for (auto &c : s) {

    c = 'x'; //read-only reference
    cout << c << endl;
  }
  return 0;
}
