#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::string; using std::endl;
using std:: vector;

int main() {

  vector<int> v1(10, 42);
  vector<string> v2{10, "42"};
  vector<int> v3{42, 42, 42, 42, 42, 42,
    42, 42, 42, 42, 42};
  
  for (auto i : v3)
    cout << i << endl;

  return 0;
}
