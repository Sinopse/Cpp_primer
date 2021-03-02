#include <iostream>
#include <string>

typedef std::string Type_str;
Type_str initVal();

class Exercise {
public:
  typedef double Type; // cannot redefine the same type -> use a different name
  Type setVal(Type);
  Type initVal();
private:
  int val;
};

Exercise::Type Exercise::initVal()
{
  return 6;
}

Exercise::Type Exercise::setVal(Type parm) {
  val = parm + initVal();
  return val;
}

int main()
{
  Exercise ex;
  std::cout << ex.setVal(42) << std::endl;

  return 0;
}
  
