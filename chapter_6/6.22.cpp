#include <iostream>

void swap(int *pi, int *pj) {
  int k = *pi;
  void * nullp;
  std::cout << sizeof(nullp) << std::endl;
  nullp = pi;

  *pi = *pj;
  *pj = *(int*)nullp; // just testing with void*  and castinh it to int*
  *pj = k;
}

int main() {
  int i = 42;
  int j = 48;

  swap(&i, &j);

  std::cout << i << " " << j << std::endl;

  return 0;
}
