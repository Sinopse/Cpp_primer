#include <iostream>
#include <string>

using std::cin; using std::cout;
using std::endl;
using std::string;

int main () {

  string str("Hello World!");

  // decltype(str.size()) str_cnt = 0;

  for (unsigned str_cnt = 0;
       str_cnt < str.size(); ++str_cnt) {

    str[str_cnt] = 'X';
  }
  cout << str << endl;
  return 0;
  
}
