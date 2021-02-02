#include <iostream>

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd) &arrPtr(int i) {
 
  return (i % 2) ? odd : even;
}

int main() {

  int *ans =  arrPtr(2);
  std::cout << *ans << std::endl;

  auto arrInt = arrPtr(2);

  for (size_t i = 0; i < 5; ++i) 
    std::cout << " " << arrInt[i];
  std::cout << '\n';
  
  return 0;
}

