#include <iostream>
#include <vector>


int main () {

  using std::cout; using std::endl;
  
  std::vector<int> ivec(10, 0);

  std::vector<int>::size_type cnt = ivec.size();

  for (std::vector<int>::size_type ix = 0;
       ix != ivec.size(); ++ix, --cnt)
    ivec[ix] = cnt;

  int count = 0;
  while (count != ivec.size()) {
    cout << count  << " " << ivec[count] << endl;
    count++;
  }
  return 0;
}
