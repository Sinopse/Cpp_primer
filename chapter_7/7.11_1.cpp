#include "Sales_data.h"
//#include "7.21.cpp"

//a program to use each of the contstructors from 7.11.cpp
 
std::istream &read(std::istream &is, Sales_data &item)
{
  double price = 0;
  is >> item.bookNo >> item.units_sold >> price;
  item.totalRevenue = price * item.units_sold;
  return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
  os << item.isbn() << " " << item.units_sold << " "
     << item.totalRevenue << " " << item.avg_price();
  return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
  Sales_data sum = lhs;
  sum.combine(rhs);
  return sum;
}


int main()
{
  // Sales_data book1;
  // book1.bookNo = "Harry Potter";
  // book1.units_sold = 50;
  // book1.totalRevenue = 100;

  Sales_data book2 ("Six of blades", 100, 50); // this is correct
  Sales_data book3 ("Harry Potter", 200, 100);
  
  // std::cout << book2.avg_price() << std::endl;
  // std::cout << book3.avg_price() << std::endl;

  //Sales_data add(book1, book2);
  

  std::cout <<  book2.isbn() << std::endl;
  
  return 0;
}
  
