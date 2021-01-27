#include <iostream>
#include <string>

using std::string;

string change_to_lower(string &s) {
  string::size_type beg = s.size();
  for (decltype(beg) i = 0; i != s.size(); ++i) {
    char &c = s[i];
    if (isupper(c))
      c = tolower(c);
  }
  return s;
}

int main() {

  string s = "Hello World!";
  change_to_lower(s);

  std::cout << s << std::endl;

  return 0;
}
