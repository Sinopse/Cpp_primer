#include <iostream>

void swap(int *num1, int *num2) {
  int swap_num = *num1;
  *num1 = *num2;
  *num2 = swap_num;

  std::cout << "swap performed" << std::endl;
}


int main() {

  
  int num1, num2;

  std::cout << "Enter two numbers: " << std::endl;
  std::cin >> num1 >> num2;

  swap(&num1, &num2);
  std::cout << num1 << " " << num2 << std::endl;
  
  
  return 0;
}
