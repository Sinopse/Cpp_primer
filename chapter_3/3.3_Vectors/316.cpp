#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::string; using std::endl;
using std:: vector;

int main () {


  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3(10, 42);
  vector<int> v4{10};
  vector<int> v5{10, 42};
  
  vector<string> v6{10};
  vector<string> v7{10, "hi"};

  vector<vector<int>> vv{v2,v3,v4,v5}; //copies
  vector<vector<string>> vstring{v6,v7};
  cout << vv.max_size() << endl;

  
  for (auto i : vstring) {
    cout << "The size of the vector is "
	 << i.size() << endl;
  
    for (auto j : i) 
      cout << j << " ";
    cout << endl;

  }
  return 0;
}
