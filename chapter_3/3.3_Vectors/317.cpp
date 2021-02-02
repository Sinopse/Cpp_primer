#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::string; using std::endl;
using std:: vector;

int main() {

  vector<string> v;
  string word;
  string line;
  string output;

  while (cin >> word) {
    v.push_back(word);
  }

  for (auto &i : v) {
    for (auto &j : i)
      j = toupper(j);
  }

  // check the size of the vector
  for (auto i : v) {
    for (int cnt = 0; cnt < 8; ++cnt) {
      output += i + " ";
    }
    cout << output << endl;
    output = line;
  }
   
  return 0;
}
