#include <iostream>
#include <string>
#include <vector>

int main () {

  using std::cin; using std::cout; using std::endl;
  using std::string;
  using std::vector;

  string input;
  vector<string> vin;

  unsigned ind = 0;
  
  while (cin >> input) {
    vin.push_back(input);

    if (vin.size() > 1 && vin[ind - 1] == vin[ind]) {
      cout << vin[ind] << " occured twice" <<  endl;
      break;
    }
    ++ind;
  }
  
 if (vin[ind - 1] != vin[ind])
  cout << "No repetitions" <<endl;

  return 0;
}
