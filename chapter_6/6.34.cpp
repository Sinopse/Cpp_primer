#include <iostream>

int factorial(int val) {
    if (val != 0)
    return factorial(val - 1) * val;
  return 1;
}

int main() {
int ans =  factorial(5);
 printf("ans = %d\n", ans);x
  return 0;
}
    
