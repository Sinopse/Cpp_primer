#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::string; using std::endl;
using std:: vector;

int main() {

  vector<int> ivec{1, 2, 3, 4, 5};
  
  for (auto it = ivec.begin();
       it != ivec.end(); ++it) {
    cout << *it << endl;
  }

  return 0;
}

    
