#include <iostream>

// to sum the numbers from 50 to 100
int loop_to_zero ()
{
  //  int count = 10;

  for (int i = 10; i >= 0; --i)
    std::cout << "Printing out numbers with a for loop "
	      << i << std::endl;

  return 0;
}


int main ()
{
  int sum = 0;
  
  for (int val = 50; val <= 100; ++val)
    sum += val;

  std::cout << "The sum is " << sum << std::endl;
  loop_to_zero();
   
  return 0;
}
