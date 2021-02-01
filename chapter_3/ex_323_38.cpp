#include <iostream>
#include <string>

using std::cin; using std::cout;
using std::endl;
using std::string;

int main () {

  string string1("Hello World!");

  //  decltype(string.size()) str_cnt = 0;

  unsigned str_cnt = 0;

  while (str_cnt < string1.size()) {

    string1[str_cnt] = 'X';
    ++str_cnt;
  }
  cout << string1 << endl;
  return 0;
  
}
