#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>

class Sales_data {
  friend Sales_data add(const Sales_data&, const Sales_data&);
  friend std::istream &read(std::istream&, Sales_data&);
  friend std::ostream &print(std::ostream&, const Sales_data&);
  // adding constructors
 public:
  Sales_data() = default;
  Sales_data(const std::string &s): bookNo(s) {}
  Sales_data(const std::string &s, unsigned n, double p):
    bookNo(s), units_sold(n), totalRevenue(p*n) {}
  Sales_data(std::istream &is) {read(is, *this);}

  // class members
  std::string isbn() const {return bookNo; }
  Sales_data& combine(const Sales_data&);
 private:
  double avg_price() const;
  std::string bookNo;
  unsigned units_sold = 0;
  double totalRevenue = 0.0;
};


Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);


Sales_data& Sales_data::combine(const Sales_data &rhs)
{
  units_sold += rhs.units_sold;
  totalRevenue += rhs.totalRevenue;
  return *this;			// return the obj on thich the function was called
}

inline
double Sales_data::avg_price() const {
  if (units_sold)
    return totalRevenue / units_sold;
  else
    return 0;
}

#endif
