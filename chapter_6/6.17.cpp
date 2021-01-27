#include <iostream>
#include <string>

using std::string;

// write a function whether a string contains capital letters

bool contains_upper (const string &s) {
  string::size_type beg = s.size();
  for (decltype (beg) i = 0; i != s.size(); ++i) {
    char c = s[i];
    return (isupper(c));
  }
  
  return 0;
}

int main() {

  string s = "hello world";
  std::cout << contains_upper(s) << std::endl;

  return 0;
}
	
