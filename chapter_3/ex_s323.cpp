#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

// processing every character with a for loop
int main () {

  // direct initialization
  string s("Hello World!!!");

  //  punct_cnt haas the same type as s.size()
  decltype(s.size()) punct_cnt = 0;

  for (auto c : s) {
    if (ispunct(c)) // if a punctuation character
      ++punct_cnt;
  }

  cout << punct_cnt
       << " punctuation cahracters in " << s << endl;
}
