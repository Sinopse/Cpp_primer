#include <isotream>
#include <string>

int main (void) {

  using std::cout; using std::endl; using std::string;

  string string1 = "Hello";
  string string2 = "Heaven";

  if (string1 > string2)
    cout << "string1 is larger than string2" << endl;
  else
    cout << "string2 is larger than string1" << endl;

  return 0;
}
   
