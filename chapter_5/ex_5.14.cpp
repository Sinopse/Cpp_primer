#include <iostream>
#include <vector>
#include <string>

int main () {

  std::string str;
  std::vector<std::string> words;

  unsigned cnt = 1, high_cnt = 0;
  
  while (std::cin >> str) 
    words.push_back(str);

  auto  it = words.begin(), wordIndex = it;
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
    std::cout << *wordIndex << " occured " << high_cnt
	      << " times." << std::endl;
  else
    std::cout << " no repetitions" << std::endl;

  return 0;
}
