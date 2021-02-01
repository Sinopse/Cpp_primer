#include <iostream>
#include <string>
#include <vector>

int main () {
  using std::cout; using std::endl;
  
  int array1[10];
  int array2[10];
  std::vector<int> vector;
  
  for(int i = 0; i < 10; ++i) {
    array1[i] = i;
    vector.push_back(array1[i]);
    }

  for (auto c : vector)
    cout << c << endl;
  
  

  for (int i = 0; i < 10; ++i) {
    unsigned index = 0;
    array2[index] = vector[i];

    // cout << array2[index] << endl;
    ++index;
  }
 
  
  return 0;
}
