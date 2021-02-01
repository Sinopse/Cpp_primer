#include <iostream>

int main () {

  using std::cin; using std::cout; using std::endl;

  int int1, int2;

  if (cin >> int1 >> int2) {
    cout << int1 / int2 << endl;
  }

  return 0;
}
