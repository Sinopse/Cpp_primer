#include <iostream>
#include <string>

using std::cin; using std::cout;; using std::endl; using std::cerr;

struct Sales_data {
  
  std::string bookNo;
  unsigned units_sold = 0;
  double totalRevenue = 0.0;
};

int main()
{
  Sales_data total;
  if (cin >> total.bookNo >> total.units_sold >> total.totalRevenue) {
      Sales_data trans;
      while (cin >> trans.bookNo >> trans.units_sold >> trans.totalRevenue) {
	if (total.isbn() == trans.isbn()) {
	  total.combine(trans);
	}
	else {
	  cout << "Current total transaction is " << total.isbn() << " with a total revenue of "
	       << total.totalRevenue
	       << " with " << total.avg_price() << "$ earned per book." << endl;  
	  total = trans;
	}
      }
      cout << "Current total transaction is " << total.isbn() << " with a total revenue of "
	       << total.totalRevenue
	   << " with " << total.avg_price() << "$  earned per book." << endl;  
    } else 
      cerr << "No data" << endl;

  return 0;
}
    
	
