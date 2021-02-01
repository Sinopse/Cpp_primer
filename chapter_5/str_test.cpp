#include <iostream>
#include <string>
#include <assert.h>

int main () {

  using std::string;
  using std::cin; using std::cout; using std::endl;

  string str("world");

  auto it = str.begin();
  cout << *++it << endl; // prefix yields the incrmented value; holds te value str[1]

  //  it++;

  cout << *it << endl;

  it++;

  cout << *it << endl;

  int i = 0, j;
  j = ++i;
  cout << i << " " << j << endl;

  j = i++;
  cout << i << " " << j << endl;
  
    
  return 0;
}
