#include <iostream>
#include <vector>

int main () {
  using std::vector;

  // vector<int> iv1 = {0, 1, 1, 2};
  // vector<int> iv2 = {0, 1, 1, 2, 3, 5, 8};

  vector<int> iv1 = {0, 1, 1, 2, 3, 5, 8};
  vector<int> iv2 = {0, 1, 1, 2, 3, 5, 8};
  //  vector<int> iv2 = {0, 1, 1, 2};
  //basically if one vector is contained in the other

  auto beg1 = iv1.begin(), beg2 = iv2.begin();
  
  if (!iv1.empty () && !iv2.empty()) {
    // while (*beg1 == *beg2 && (beg1+1 != iv1.end() || beg2 + 1 != iv2.end())) {
    //   ++beg1;
    //   ++beg2;
    while (*beg1 == *beg2 && (beg1 != iv1.end() || beg2 != iv2.end())) { // equivalent to above with prefix
      beg1++;
      beg2++;
  }
    if (*iv1.end() == *iv2.end())
      std::cout << "Both vectors are identical" << std::endl;
    else if (beg1 == iv1.end()) {
      // std::cout << *beg1 << " " << *beg2 << std::endl;
      std::cout << "Vector 2 contains vector 1" << std::endl;
    }
    else
      std::cout << "Vector 1 contains vector 2" << std::endl;      
  }
  
  return 0;
}
