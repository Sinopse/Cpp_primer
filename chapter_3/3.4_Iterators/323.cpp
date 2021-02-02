#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::string; using std::endl;
using std:: vector;

int main() {
  vector<int> vector1(10); // doesn't work with this initialization
  vector<int> vector{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // constructor

  for (auto it = vector.begin(); it != vector.end(); ++it) {
    *it *= 2;
  }

  for (auto i : vector) {
    cout << i << endl;
  }

  return 0;
}
