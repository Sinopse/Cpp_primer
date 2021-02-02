#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

int main () {

  string s1;

  cin >> s1;
  
  string s2("foo");
  string s3(5, 'c');

  cout << s1 << s2 << s3
       << endl;

  return 0;
}
