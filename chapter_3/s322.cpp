#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl; using std::string;

int main ()
{
  string line;
  string str = "Hello";
  string slang = "Hiya";


  
  if (slang >= str) {
    cout << slang << " is bigger" << endl;
  }

  // read input a line at a time
  while (getline(cin, line)) {
    if (!line.empty()) {

      // exit on foo
      
      if (line == "foo") {
	return -1;
      }

      // returning the string line and
      // its size
      
      cout << line
	   << " " << line.size() // returns type unsigned !
	   << endl;
    }
   
  }
  return 0;
}
