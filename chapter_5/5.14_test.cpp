#include <iostream>
#include <string>
#include <vector>

int main () {

  using std::string;
  using std::cin; using std::cout; using std::endl;

  unsigned Cnt = 1, highCnt = 1;
  
  std::vector<string> words;
  string str;

  while (cin >> str)
    words.push_back(str);

  for (auto c : words)
    cout << c << endl;
   
  
  return 0;
}
