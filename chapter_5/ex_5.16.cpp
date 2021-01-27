#include <iostream>
#include <string>
#include <vector>

int main() {
  using std::cin;
  std::string str;
  std::vector<std::string> vstr;  
  // while (cin >> str)
  //   std::cout << str << std::endl;

  for (str; cin >> str;)
    vstr.push_back(str);

  // for (auto ind = vstr.begin(); ind != vstr.end(); ++ind) {
  //   std::cout << *ind << std::endl;
  // }

  auto ind = vstr.begin();
  while (ind != vstr.end()) {
    std::cout << *ind << std::endl;
    ++ind;
  }
  
  
  return 0;
}


