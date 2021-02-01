#include <iostream>
#include <vector>

int main () {
  std::vector<int> it = {1, 2, 3, 4, 5};

  for (std::vector<int>::iterator iter = it.begin(); iter != it.end(); ++iter) {

    std::cout << *iter << std::endl;
  }
  return 0;

}
  
