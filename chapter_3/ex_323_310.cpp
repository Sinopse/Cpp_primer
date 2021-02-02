#include <iostream>
#include <string>

using std::cin; using std::cout;
using std::endl;
using std::string;

int main (){

  string str("Hello,,,World!");
  string output;
  

  for (char c : str) {

    if (!ispunct(c)) 
      output += c;
    ++c;}
    
      cout << output << endl;
      return 0;
}
