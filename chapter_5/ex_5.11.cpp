#include <iostream>
#include <string>

int main() {

  unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, bspCnt = 0, nCnt = 0, tabCnt = 0;

  char ch;
  std::string line;
  
  while (getline(std::cin, line)) {
    line += '\n';
    auto it = line.begin();
    while ((ch = *it++)) {
      switch (tolower(ch)) {
    
      case 'a':
	++aCnt; break;
      case 'e':
	++eCnt; break;
      case 'i':
	++iCnt; break;
      case 'o':
	++oCnt; break;
      case 'u':
	++uCnt;break;:
      case ' ':
	++bspCnt;break;
      case '\n':
	++nCnt; break;
      case '\t':
	++tabCnt; break
    }
  }
  }
  std::cout << "Number of a: " << aCnt << '\n'
	    << "Number of e: " << eCnt << '\n'
	    <<  "Number of i: " << iCnt << '\n'
	    <<  "Number of o: " << oCnt << '\n'
	    <<  "Number of u: " << uCnt << '\n'
	    << "Number of tabs: " << tabCnt << '\n'
	    << "Number of newlines: " << nCnt << '\n'
	    << "Number of bsp: " << bspCnt << std::endl;

  return 0;
}
  
    
