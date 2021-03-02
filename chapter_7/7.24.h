#include <iostream>
#include <string>

class Screen {
public:
  typedef std::string::size_type pos;
  Screen() = default;
  Screen(pos ht, pos wt): height(ht), width(wt),
			  contents(ht * wd * ' ') {}
  Screen(pos ht,  pos wt, char cs): height(ht), width(wt),
				    contents(ht * wd, cs) {}
private:
  pos width;
  pos height;
  std::string contents;
};
