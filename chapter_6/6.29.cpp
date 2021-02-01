#include <iostream>
#include <string>

using std::cout; using std::endl;

struct Error {
  std::string error_msg;
};

void print_err_msg(Error e, std::initializer_list<std::string> il) {
  cout << e.error_msg << ": ";
  for (const auto &elem : il)	// should you ever perform any action on elem -> reference
    cout << elem << " " ;
  cout << endl;
}

int main() {
  Error err1;
  err1.error_msg = "Error 404";

  print_err_msg(err1, {"function", "no connecntion", "actual"});

  return 0;
}

		
