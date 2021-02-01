#include <iostream>
#include <vector>
#include <string>

  using std::cout; using std::endl;
  
//same version as aboe with if statement

int main () {

  const int grades[] = {50, 60 ,75, 90, 100, 35};

  for (auto const grade : grades) {
    if (grade < 90) {
      if (grade <= 75 && grade >= 60) 
	cout << "low pass" << endl;
      if (grade < 60)
	cout << "fail" << endl;
    }
    else
      cout << "high pass" << endl;
  }

  return 0;
}


//int main () {

  // using conditional operator
  // using std::string;
  
  // const int grades[] = {50, 60 ,75, 90, 100, 35};

  // for (auto const grade : grades) {
  //   cout << ((grade > 90) ? "high pass"
  // 		  : (grade < 75 && grade > 60) ? "low pass"
  // 		  : (grade < 60) ? "fail" : "pass")
  // 	      << endl;
  // }

  // other_version(grades);
  
//  return 0;
//}
