#include <iostream>

int main (void) {

  // char ch = 100;
  // signed char new_ch = -130; 	// overflows

  // printf("ch: %d; new_ch: %d\n", ch, new_ch);  

  int myInt =  4294967295;
  int newInt = myInt + 10;

  printf("ch: %d; new_ch: %d\n", myInt, newInt);  

  signed int sigInt = 4294967295 / 2 + 10;
  printf("ch: %d; new_ch: %d\n", myInt, sigInt);  
  
  return 0;
}
