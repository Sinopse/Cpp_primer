#include <iostream>

struct Foo {
  std::string bookNo;
  unsigned int numbersSold = 0;
  double revenue = 0.0;
};

int main() {

    auto revenue = Foo.revenue;
  
    std::cout << Foo.revenue << std::endl;  
  }
