#include <iostream>
#include <string>

struct Person {
  std::string personName;
  std::string personAddress;
  std::string display_name() const { return personName; }
  std::string display_address() const { return personAddress; }
};
