#include <iostream>

using std::cout; using std::endl;

void f() {
  cout << "function  was called without arguments"
       << endl;
}

void f(int i)
{
  cout << "function  was called with one argument: "
       << i
       << endl;
}

void f(int i, int j)
{
 cout << "function  was called with two int arguments: "
      << i << " " << j
       << endl;
} 
  
void f(double i, double j)
{
 cout << "function  was called with two double arguments: "
      << i << " " << j
       << endl;
} 
   
int main()
{
  f(2.56, 42);
  f(42);
  f(42, 0);
  f(2.56, 3.14);

  return 0;
}
