#include <iostream>
#include <string>
#include <cstring>

int main (void) {

  using std::cout; using std::endl; using std::string;

  string string1 = "Heap";
  string string2 = "Heaven";

  if (string1 > string2)
    cout << "string1 is larger than string2" << endl;
  else
    cout << "string2 is larger than string1" << endl;

  const char ca1[] = "Heaz";
  const char ca2[] = "Heaven";

  if (strcmp(ca1, ca2) < 0)
      cout << "ca1 is smaller than ca2" << endl;
  else
      cout << "ca2 is smaller than ca1" << endl;    
  
  return 0;
}
   
