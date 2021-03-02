#include <iostream>
#include <string>
#include "Screen_noref.h"

// add move, set, display operations to the Screen class

int main()
{
  Screen myScreen(5, 5, 'X');
  myScreen.move(4, 0).set('#').display(std::cout);
  std::cout << "\n";
  myScreen.display(std::cout);
  std:: cout << "\n";

  return 0;
}

