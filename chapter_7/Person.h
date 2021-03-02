#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

class Person {
  friend std::istream &read(std::istream&, Person&);
  friend std::ostream &print(std::ostream&, const Person&);
public:
  //Person() = default;
  Person(const std::string &s) : name(s) {}
  Person(const std::string &n, const std::string &a, int ag) :
    name(n), address(a), age(ag) {}
  // delegating constructor
  Person(): Person("No name", "No address", 0) {}
  Person(std:: istream &is) {read(is, *this);}
  Person& reset (Person&);
private:
  std::string name;
  std::string address;
  int age;
  std::string display_name() const { return name; }
  std::string display_address() const { return address; }

  // providing operation read() and print() for the Person class
};

Person &Person::reset( Person& human)
{
  human.age += 5;
 
  return *this;
}

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

// returning a const pointer so that member functions won't change the object
#endif
