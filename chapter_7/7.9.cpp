//#include "Person.h"

std::istream &read(std::istream &is, Person &human)
{
  is >> human.name >> human.address;
  return is;
}

std::ostream &print(std::ostream &os, const Person &human)
{
  os << "Name: " << human.name << " lives at "
     << human.address;
  return os;
}

							
// int main()
// {
//   Person person1;
//   std::cin >> person1.personName >> person1.personAddress;

//   person1.read();
//   person1.print();

//   return 0;
// }
	     
