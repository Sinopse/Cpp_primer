#include <iostream>
#include <string>

// a few examples

inline int compare(int i, int *pi)
{
  if (i > *pi)
    return i;
  else
    return *pi;
}

inline std::string tolower(std::string &s)
{
  for (auto &c : s)
    if (isupper(c))
      c = tolower(c);
  return s;
}
	

int main()
{
  int i =  42;
  int k = 48;
  
  std::cout << compare(i, &k) << std::endl;

  std::string s1 = "WORLD";

  std::cout << tolower(s1) << std::endl;
  
  return 0;
}
