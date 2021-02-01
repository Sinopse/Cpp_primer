#include <iostream>
#include <string>

int main() {
  using std::string;

  string s = "World";
  string::iterator iter = s.begin();
  
  while (iter != s.end()) {
    std::cout << *iter << std::endl;
    ++iter;
  }

  bool status;
  while (status = std::find(s)) {
    std::cout << "found" << std::endl;
  }
  if (!status) {
    return -1;
  }
  
  return 0;

}


