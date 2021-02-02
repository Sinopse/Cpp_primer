#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::string; using std::endl;
using std:: vector;

int main() {

  // take a look later
  vector<string> text;
  string  word;

  // it->mem is equivalent to (*it).mem
  while(getline(cin, word)) {
	text.push_back(word);
	
	}
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
      for (auto &i : *it)
      i = toupper(i);
      cout << *it << endl;
    }
  return 0;
}

  
