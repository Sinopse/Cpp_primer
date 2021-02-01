#include <iostream>
#include <string>

using std::cin; using std::string; using std::cout; using std::endl;

int main () {
  string str1, str2;

  do {
    cout << "Please enter two strings: " ;
    if (cin >> str1 >> str2) {
      if (str1 > str2)
	cout << "str2 is less than str1\n" ;
      else if (str2 > str1)
	cout << "str1 is less than str2\n" ;
      else
	cout << "strings are equal\n" << endl;
    }
  } while (cin);

  return 0;
}

    
