#include "Person.h"

int main()
{
  Person Person1("Alex", "Maisweg 11");

  //  std::cout << Person1.name << " " << Person1.address << std::endl;

  Person Person2;
  read(std::cin, Person2);
  print(std::cout, Person2);
  std::cout << Person2.display_address() << std::endl;
  //  std::cout << Person2.display_address << std::endl;
  Person Person3(std::cin);
  print(std::cout, Person3) << std::endl;
  return 0;
}
