#include <iostream>
#include <string>
#include <vector>

int main () {

<<<<<<< HEAD
  using std::string; using std::vector; using std::cin; using std::cout; using std::endl;

  string input;
  vector<string> svector;

  auto beg = svector.begin();
    
  while (cin >> input) {
    svector.push_back(input);

    if (svector.size() > 1 && *beg == *(beg - 1)) {
      cout << "Word " << *beg << " occurred twice." << endl;
      break;
    }
    ++beg;
  }
  cout << "No word occured twice." << endl;
=======
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
>>>>>>> 2d6c3b0c213c462f1d9da6cf493626c576ef8068

  return 0;
}
