#include <iostream>
#include <string>
//#include "7.7.cpp"
// add combine() and isbn() member functions to the
// Sales_data class

// class Sales_data;
// Sales_data add(const Sales_data&, const Sales_data&);
// std::ostream &print(std::ostream&, const Sales_data&);
// std::istream &read(std::istream&, Sales_data&);


class Sales_data {
  friend Sales_data add(const Sales_data&, const Sales_data&);
  friend std::istream &read(std::istream&, Sales_data&);
  friend std::ostream &print(std::ostream&, const Sales_data&);
  // adding constructors
public:
  Sales_data(const std::string s = ""): bookNo(s) {}
  Sales_data(const std::string &s, unsigned n, double p):
    bookNo(s), units_sold(n), totalRevenue(p*n) {}
  Sales_data(std::istream &is = std::cin) {read(is, *this);}

  // class members
  std::string isbn() const {return bookNo; }
  Sales_data& combine(const Sales_data&);
  double avg_price() const;
// private:
  std::string bookNo;
  unsigned units_sold = 0;
  double totalRevenue = 0.0;
};

 // Sales_data add(const Sales_data&, const Sales_data&);
 // std::istream &read(std::istream&, Sales_data&);
 // std::ostream &print(std::ostream&, const Sales_data&);

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
  units_sold += rhs.units_sold;
  totalRevenue += rhs.totalRevenue;
  return *this;	       // return the obj on thich the function was called
}

double Sales_data::avg_price() const {
  if (units_sold)
    return totalRevenue / units_sold;
  else
    return 0;
}
 
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

int main()
{
  Sales_data first_item(std::cin);
  Sales_data next;
  Sales_data last("9-999-99999-9");

  print(std::cout, first_item);
  std::cout << "\n";
  print(std::cout, next);
  std::cout << "\n";
  print(std::cout, last);

  return 0;
}

// The list of values for each object
// "Bonkers" 100 5.5e+06 55000
// 0 0 0
// 9-999-99999-9 0 0 0
