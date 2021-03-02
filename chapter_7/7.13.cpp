#include "7.11.cpp"

// rewrite the program ti use the istream constructor
int main()
{

  Sales_data total(std::cin);

  if (std::cin) {
    Sales_data trans;
    while(read(std::cin, trans)) {
      if (total.isbn() == trans.isbn())
	total.combine(trans);
      else {
	print(std::cout, total) << std::endl;
	total = trans;
      }
    }
    print(std::cout, total) << std::endl;
  } else {
    std::cerr << "No data?" << std::endl;
  }

return 0;
}
