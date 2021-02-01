#include <iostream>
#include "sales_data.h"


int main ()
{

  Sales_data book1, book2;

  std::cin >> book1.bookNo >> book2.bookNo;

  if (book1.bookNo == book2.bookNo) {
    std::cout << book1.bookNo << std::endl;
  }

  else {
    std::cerr << "Different book names" << std::endl;
  }
 
}

