#include <iostream>

int main () {

  using std::cin; using std::cout; using std::endl;

  int input;
  int arr[] = {0};
  int *pa = arr;
    
  while (cin >> input) {
    *pa = input;
    ++pa;
    if (input == 42) {
      return -1;
    }
  }

  for (const &c : arr)
    cout << c << endl;
  
  return 0;
}
  
