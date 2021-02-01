#include <iostream>
#include "sales_data.h"
#include <string>


int main () {

  Sales_data total;

  if (std::cin >> total.bookNo >> total.units_sold) {

    Sales_data trans1;
    
    
    while (std::cin >> trans.bookNo >> trans.units_sold) {
       
      if (total.bookNo == trans.bookNo) {
	total.units_sold += trans.units_sold;
      }
      
      else {
	std::cout << total.units_sold << std::endl;
	total.bookNo = trans.bookNo;
      }
    }
    std::cout << total.units_sold << std::endl;
    } 
  
  else {
    std::cerr << "No input" << std::endl;
    return -1; 
  }
  return 0; 
}
