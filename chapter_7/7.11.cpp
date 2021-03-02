#include <iostream>
#include <string>
//#include "7.7.cpp"
// add combine() and isbn() member functions to the
// Sales_data class

struct Sales_data;
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);


struct Sales_data {
  // adding constructors
  Sales_data() = default;
  Sales_data(const std::string &s): bookNo(s) {}
  Sales_data(const std::string &s, unsigned n, double p):
    bookNo(s), units_sold(n), totalRevenue(p*n) {}
  Sales_data(std::istream &is) {read(is, *this);}

  // class members
  std::string isbn() const {return bookNo; }
  Sales_data& combine(const Sales_data&);
  double avg_price() const;
  std::string bookNo;
  unsigned units_sold = 0;
  double totalRevenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
  units_sold += rhs.units_sold;
  totalRevenue += rhs.totalRevenue;
  return *this;			// return the obj on thich the function was called
}

double Sales_data::avg_price() const {
  if (units_sold)
    return totalRevenue / units_sold;
  else
    return 0;
}

// defining a constructor outside the class body
// Sales_data::Sales_data(std::istream &is)
// {
//   read(is, *this);
// }
 
std::istream &read(std::istream &is, Sales_data &item)
{
  double price = 0;
  is >> item.bookNo >> item.units_sold >> price;
  item.totalRevenue = price * item.units_sold;
  return is;
}

std::ostream &print(std::ostream &os, Sales_data &item)
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

