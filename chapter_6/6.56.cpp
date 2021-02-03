#include "6.55.cpp"

int main() {
  std::vector<PFF> pvec{addInts, subInts, multInts, divInts}; // importnat with return types!
  
  for (auto const c : pvec)
    try {
    std::cout << c(42, 0) << std::endl;
    } catch (std::runtime_error err) {
      std::cout << err.what() << std::endl;
    }
  return 0;
}
