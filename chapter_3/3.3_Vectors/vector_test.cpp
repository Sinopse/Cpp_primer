#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;

int main () {
  vector<int> v1;

  for (int i = 0; i != 100; ++i)
    v1.push_back(i);

  for (auto i : v1)
    cout << i << endl;

    return 0;

}
