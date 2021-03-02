//#include "7.11.cpp"

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
     << item.totalRevenue << " " <<< item.avg_price();
  return os;
}

Sales_data::Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
  Sales_data sum = lhs;
  sum.combine(rhs);
  return sum;
}

