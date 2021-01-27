#include <iostream>
#include <string>
#include <assert.h>

int main () {

  using std::string;
  using std::cin; using std::cout; using std::endl;

  string line;

  unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
  
  char ch;

  while (getline(cin, line)) {
    line += '\n';
    auto it = line.begin();

    while ((ch = *it++)) {
      switch (tolower(ch)) {
      case 'f':
	switch (*it) {
	case 'f':
	  ++ffCnt; break;
	case 'l':
	  ++flCnt; break;
	case 'i':
	  ++fiCnt; break;
	default:
	  break;
	}
      }
    }
  }
  cout << "Number of ff: " << ffCnt << '\n'
       << "Number of fl: " << flCnt << '\n'
       <<  "Number of fi: " << fiCnt << endl;

  
  return 0;
}
