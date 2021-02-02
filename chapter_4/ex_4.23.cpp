#include <iostream>
#include <string>

int main () {

  using std::string;

  string s = "word";
  size_t p = s.size();
  std::cout << p << std::endl;
    
  
  string p1 = s + ((s[s.size() - 1] == 's') ? "" : "s");

  
  std::cout << p1 << std::endl;

  return 0;
}
 
