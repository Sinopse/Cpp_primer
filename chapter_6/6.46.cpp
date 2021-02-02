#include <iostream>
#include <string>

 constexpr std::string isShorter(const std::string &s1, const std::string &s2)
{
  return s1.size() < s2.size() ? s1 : s2;
}

int main()
{
  std::string str1 = "Hello";
  std::string str2 = "World";

  std::cout << isShorter(str1, str2) << std::endl;

  return 0;
}

// the above won't work because &s1 and &s2 are not constexpr;
// strings are not literals -> mot constexpr
