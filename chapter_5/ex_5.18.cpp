#include<iostream>

using std::cin; using std::cout; using std::endl;

int main () {
  int v1, v2; // definded outside the loop

  do {
    cout << "Please enter two numbers to sum: ";
    if (cin >> v1 >> v2)
      cout << "Sum is: " << v1 + v2 << endl;
  } while (cin);

  return 0;
}
