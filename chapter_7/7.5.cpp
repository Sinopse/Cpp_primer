#include <iostream>
#include <string>

struct Person {
  std::string personName;
  std::string personAddress;
  std::string display_name() const { return personName; }
  std::string display_address() const { return personAddress; }

  // providing operation read() and print() for the Person class

  std::istream &read(&is, Person&);
  std::ostream &print(&os, const Person&);
  
};

// returning a const pointer so that member functions won't change the object
