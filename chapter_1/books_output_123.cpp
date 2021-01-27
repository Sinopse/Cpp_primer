#include <iostream>
#include "Sales_item.h"

int main ()
{

  Sales_item book, item;

  if (std::cin >> book) {
    int count = 1;
    while (std::cin >> item) {
      if (book.isbn() == item.isbn()) {
	book += item; 
	++count;
      }
      else {
	std::cout << book << " occurs "
		  << count << " times" << std::endl;
	book = item;
	count = 1;
      }
    }
    std::cout << book << " occurs "
	      << count << " times" << std::endl;
      
  }
  return 0;
}
