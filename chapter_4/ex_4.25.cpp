#include <iostream>
#include <bitset>

int main () {

  unsigned char q = 'q';
  unsigned long bits = ~q  << 6; // adds six zeros at the end
  
  std::cout << std::bitset<32>(bits) << std::endl; // bitset for a on-fly conversion

  return 0;
}
  
