#include <iostream>
#include <string>

int main () {

  std::string word, prevWord;

  bool match = false;
  while (std::cin >> word) {

    if (!word.empty() && word == prevWord) {
      match = true;
      break;
    }

    prevWord = word;
  }

  if (match)
    std::cout << word << std::endl;
  else
    std::cout << "no occurrences" << std::endl;

  return 0;
}
