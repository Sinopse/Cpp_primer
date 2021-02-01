#include <iostream>
#include <string>
#include <vector>

int main () {

  using std::string; using std::vector; using std::cin; using std::cout; using std::endl;

  string input;
  vector<string> svector;

  auto beg = svector.begin();
    
  while (cin >> input) {
    svector.push_back(input);

    if (svector.size() > 1 && *beg == *(beg - 1)) {
      cout << "Word " << *beg << " occurred twice." << endl;
      break;
    }
    ++beg;
  }
  cout << "No word occured twice." << endl;

  return 0;
}
