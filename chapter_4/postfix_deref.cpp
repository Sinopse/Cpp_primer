#include <iostream>
#include <vector>

int main () {
  std::vector<int> ivec = {0, 1, 2, 3, 4, -5, 6};

  auto pbeg = ivec.begin();

  while (pbeg != ivec.end() &&  *pbeg >= 0)

    //std::cout << *pbeg++ << std::endl; // * is the unincremented value

  std::cout << *(++pbeg) << std::endl; // uing the prefix operator - incremetns one value too much
  std::cout << *pbeg  << std::endl;
    
  return 0;
}
   
