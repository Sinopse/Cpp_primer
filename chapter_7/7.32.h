#ifndef 7_32_H
#define 7_32_H
#include <vector>
#include <iostream>
#include <string>

// define your own versions of Scree na Window_mgr in which clear
// is a member of Window_mgr and a friend of Screen

class Window_mgr {
 public:
  using ScreenIndex = std::vector<Screen>::size_type;
  void clear(ScreenIndex);
 private:
  std::vector<Screen> screens{Screen(24, 80, ' ')};
};

class Screen {
  friend void Window_mgr::clear(ScreenIndex);
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

void Window_mgr::clear(ScreenIndex i)
{
  Screen &s = screens[i];
  s.contents = std::string(s.height * s.width, ' ');
}

#endif
