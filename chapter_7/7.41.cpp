#include <iostream>
#include <string>

class Sales_data {
  friend Sales_data add(const Sales_data&, const Sales_data&);
  friend std::istream &read(std::istream&, Sales_data&);
  friend std::ostream &print(std::ostream&, const Sales_data&);
  // adding constructors
 public:
  Sales_data(const std::string &s, unsigned n, double p):
    bookNo(s), units_sold(n), totalRevenue(p*n) {
    std::cout << "non-delegating constructor" << "\n";}
  Sales_data(): Sales_data("", 0, 0)  {
    std::cout << "delegating default constructor" << "\n"; }
  Sales_data(std::string s): Sales_data(s, 0, 0) {
    std::cout << "delegating default constructor w string" << "\n";}
  Sales_data(std::istream &is): Sales_data() {read(is, *this);}

  // class members
  std::string isbn() const {return bookNo; }
  Sales_data& combine(const Sales_data&);
 // private:
  double avg_price() const;
  std::string bookNo;
  unsigned units_sold = 0;
  double totalRevenue = 0.0;
};


// Sales_data add(const Sales_data&, const Sales_data&);
// std::ostream &print(std::ostream&, const Sales_data&);
// std::istream &read(std::istream&, Sales_data&);


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
  Sales_data book1;
  std::cout << "** first" << "\n";
  Sales_data book2("9-99999-9999");
    std::cout << "** second" << "\n";
  Sales_data book3("5-22222-222", 100, 20000);
  std::cout << "** third" << "\n";
  Sales_data book4(std::cin);
  std::cout << "** fourth" << "\n";
  Sales_data book5(std::cin);
  std::cout << "** fifth" << "\n";

  print(std::cout, book1);
  std::cout << "\n";
  print(std::cout, book2);
  std::cout << "\n";
  print(std::cout, book3);
  std::cout << "\n";
  print(std::cout, book4);
  std::cout << "\n";
  print(std::cout, book5);
  return 0;
}
