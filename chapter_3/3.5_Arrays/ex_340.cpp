#include <iostream>
#include <cstring>

int main () {
  const char str1[] = "Hello";
  const char str2[] = "World";
  size_t size =	strlen(str1) + strlen(str2);

 char largeStr[size];
    
  strcpy(largeStr, str1);
  strcat(largeStr, " ");
  strcat(largeStr, str2);

  size_t size1 = strlen(largeStr);

  std::cout << size
	    <<" "
	    << largeStr
	    <<" " 
	    << size1 << std::endl;

  return 0;
}
