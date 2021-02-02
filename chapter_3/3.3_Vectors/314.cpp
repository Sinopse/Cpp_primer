#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;

int main () {
  vector<int> v1;
  //  string word;
  int i;
  
  while (cin >> i) {
    v1.push_back(i);
  }
  
  if (!v1.empty()){
    cout << v1.size() << endl;
  }
  
  return 0;
  
}
