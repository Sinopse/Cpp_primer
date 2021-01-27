#include <iostream>

int main() {

  unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;

  char ch;
  while (std::cin >> ch) {
    if (ch == 'a' || ch == 'A')
      ++aCnt; 
    if (ch == 'e' || ch == 'E')
      ++eCnt; 
    if (ch == 'i' || ch == 'I')
      ++iCnt; 
    if (ch == 'o' || ch == 'O')
      ++oCnt; 
    if (ch == 'u' || ch == 'U')
      ++uCnt; 
  }
  
  std::cout << "Number of a: " << aCnt << '\n'
	    << "Number of e: " << eCnt << '\n'
	    <<  "Number of i: " << iCnt << '\n'
	    <<  "Number of o: " << oCnt << '\n'
	    <<  "Number of u: " << uCnt << std::endl;

  return 0;
}
  
    
