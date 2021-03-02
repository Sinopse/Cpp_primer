#include <iostream>

// a constexpr member is not implicitly const -> mark explicitly as const

class Debug {
public:
  constexpr Debug(bool b = true): hw(b), io(b), other(b) {}
  constexpr Debug(bool h, bool i, bool o): hw(h), io(h), other(o) {}
  constexpr bool any() const { return hw || io || other; }
  void set_io(bool b) {io = b; }
  void set_hw(bool b) { hw = b; }
  void set_other(bool b) {hw = b; }
private:
  bool hw;
  bool io;
  bool other;
};

int main()
{
  constexpr Debug io_sub(false, true, false);
  if (io_sub.any())
    std::cerr << "Print error message " << std::endl;

  constexpr Debug prod(true);
  if (prod.any())
  std::cerr << "Print an error message" << std::endl;

  return 0;
}
