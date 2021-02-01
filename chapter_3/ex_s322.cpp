#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

int main ()
{
  string line;
  string string1;
  string string2;

  getline(cin, string1);
  getline(cin, string2);

  if (string1.size() == string2.size()) {
    cout << "Strings are equally long"
	 << string1.size() << " " << string2.size()
	 << endl;
  }

  else {
    if (string1.size() > string2.size()) {
      cout << "String1 is longer than string2 "
	   << string1.size() << " " << string2.size()
	   << endl;
    }
    else {
    cout << "String2 is longer than string1 "
	 << string1.size() << " " << string2.size()
	 << endl;
    }
  }
  
  /*  while (cin >> line) {
    cout << line << endl;
    } */

  /* while (getline(cin, line)) {
    if (line.size() >= 20) {
      cout << "Exceeded the limit" << endl;
      return -1;
    }
    cout << line << endl;
    } */

  return 0;
}
