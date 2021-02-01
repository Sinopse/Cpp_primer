#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::string; using std::endl;
using std:: vector;

int main() {
  string s("some string");
  if (s.begin() != s.end()) {
    auto it = s.begin();
    *it = toupper(*it);
  }
  cout << s << endl;
  return 0;
}

  
