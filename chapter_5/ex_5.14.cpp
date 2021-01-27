#include <iostream>
#include <string>
#include <vector>

int main () {

  using std::string;
  using std::cin; using std::cout; using std::endl;

  unsigned cnt = 1, high_cnt = 0;
  string str;
  std::vector<string> words;

  while (cin >> str) 		// no spaces read!
    words.push_back(str);

    auto it = words.begin(), wordIndex = it;
    while (it != words.end()) {
      if (it + 1 != words.end() && *it == *(it + 1))
	  ++cnt;
	else {
	  if (cnt > high_cnt) {
	    high_cnt = cnt;
	    wordIndex = it;
	  }
	  cnt = 1;
	}
	++it;
      }
  
      if (high_cnt > 1)
	cout << *wordIndex << " occured " << high_cnt << endl;
      else
	cout << "no repetitions" << endl;
  
  return 0;
}
