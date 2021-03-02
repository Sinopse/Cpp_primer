#include <iostream>
#include <string>

// add combine() and isbn() member functions to the
// Sales_data class

struct Sales_data {
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

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
