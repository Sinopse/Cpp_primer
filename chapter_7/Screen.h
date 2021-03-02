#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include <string>

// add move, set, display operations to the Screen class
class Window_mgr;
  


class Screen {
public:
  typedef std::string::size_type pos;
  Screen() = default;
  //Screen(pos ht, pos wt): height(ht), width(wt),
  //			  contents(ht * wt * ' ') {}
  Screen(pos ht,  pos wt, char cs): height(ht), width(wt),
				    contents(ht * wt, cs) {}
  Screen &move(pos r, pos c);
  Screen &set(char);
  Screen &display(std::ostream &os) { do_display(os); return *this; }
 
private:
  pos cursor;
  pos width, height;
  std::string contents;
  void do_display(std::ostream &os) const { os << contents;}
};

inline Screen &Screen::set(char c)
{
  contents[cursor] = c;
  return *this;
}

inline Screen &Screen::move(pos r, pos c)
{
  pos row = r * width;
  cursor = row + c;
  return *this;
}

#endif
