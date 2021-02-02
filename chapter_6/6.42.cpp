#include <iostream>
#include <string>

using std::string;

string make_plural(size_t ctr, const string &word,
		   const char ending = 's')
{
  return (ctr > 1) ? word + ending : word;
}

int main()
{
  string str1 = "success";
  size_t ssize = str1.size();

  std::cout << make_plural(ssize, str1) << std::endl;

  return 0;
}

