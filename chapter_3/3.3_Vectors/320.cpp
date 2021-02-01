#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::string; using std::endl;
using std:: vector;

int main() {
  vector<int> v;
  int input;
  
  while(cin >> input) {
    int temp = input;
    v.push_back(temp);
  }


  // try different types
  if (!v.empty()) {
    for (decltype(v.size()) ind = 0; ind != v.size(); ++ind) {
	auto elt1 = v[ind];
	auto elt2 = v[ind + 1];
	auto sum = elt1 + elt2;
	cout << "The sum is: " << sum << endl;
	++ind;
      }
   }
  return 0;
}
      
