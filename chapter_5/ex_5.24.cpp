#include <iostream>

// throw an exception if the second number is zero

int main () {

  using std::cin; using std::cout; using std::endl;

  int int1, int2;

  if (cin >> int1 >> int2) {

    if (int2 == 0)
      throw std::runtime_error("Zero division");
    
    cout << int1 / int2 << endl;
  }

  return 0;
}
