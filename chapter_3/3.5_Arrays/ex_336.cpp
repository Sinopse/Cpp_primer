#include <iostream>
#include <vector>

int main (void) {

  using std::cout; using std::endl; using std::begin; using std::end;
  
  int array1[] = {1, 2, 3, 4};
  int array2[] = {1, 2, 3, 4};

  int *pbeg1 = begin(array1), *pend1 = end(array1);
  int *pbeg2 = begin(array2), *pend2 = end(array2);

  while (pbeg1 < pend1) {
    if (*pbeg1 != *pbeg2) {
      break;
    }
    ++pbeg1;
    ++pbeg2;
  }

  if (pbeg1 == pend1 && pbeg2 == pend2) {
    cout << "equal" << endl;
  }
  else
    cout << "unequal" << endl;


// compare two vectors

std::vector<int> vector1 = {10, 20 ,30};
std::vector<int> vector2 = {10, 20 ,30, 40};

if (vector1 != vector2)
  cout << "unequal" << endl;
 else
   cout << "equal" << endl;
}
