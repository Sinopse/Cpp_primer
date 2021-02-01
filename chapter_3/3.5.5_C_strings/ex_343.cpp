#include <iostream>
#include <string>
#include <vector>

int main () {

  using std::cout; using std::endl;
  
  //print the elements of the array with a normal for
  
constexpr  size_t row = 3, col = 4;

 int ia[row][col];

 for (size_t i = 0; i != row; ++i) {
   for ( size_t j = 0; j != col; ++j)
     cout << ia[i][j] << ' ';
   cout << endl;
 }

 cout << endl;
 
 //print the elements with pointers

 // for (auto p = ia; p != ia + 3; ++p) {  // with auto
 //   for (auto q = *p; q != *p + 4; ++q)
 //     cout << *q << ' ';
 //   cout << endl;
 // }

 for (int (*p)[col] = ia; p != ia + 3; ++p) { // p points to an array of four ints
   for (int *q = *p; q != *p + 4; ++q) // q points to an int
     cout << *q << ' ';
   cout << endl;
 }

 // using a range for loop

 for (const auto &i : ia) { 	// using references to avoid conversion to pointers
   for (auto c : i) 		// 
     cout << c << ' ';
 cout << endl;
   }
 
 return 0;
}
