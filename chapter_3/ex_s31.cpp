#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

  int sum = 0;

  for (int i = 0; i <= 10; ++i)
    sum += i;
  
  cout << sum << endl;

  int sum1 = 0, val = 50;

  while (val <= 100) {
    sum1 += val;
    ++val;
  }
  cout << sum1 << endl;

  return 0;
 
}
