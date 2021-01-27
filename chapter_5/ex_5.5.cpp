#include <iostream>
#include <vector>
#include <string>

int main() {
  using std::vector;
  using std::string;
  using std::cin; using std::cout; using std::endl;
  
  vector<string> svec = {"F", "D", "C", "B", "A", "A++"};

  unsigned score;
  string grade;

  while (cin >> score) {
    if (score < 60) {
      grade = svec [0];
    }
    else {
      grade = svec[(score - 50) / 10];
    }
    cout << "Your grade is: " <<  grade << endl;
  }
    return 0;
}

  
  
