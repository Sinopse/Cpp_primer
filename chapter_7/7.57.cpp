#include <iostream>
#include <string>

class Account {
public:
  Account() = default;
  Account(std::string name): owner(name) {}
  Account(std::string name, double amt): owner(name), amount(amt) {}
  void calculate() { amount += amount * interestRate; }
  double accountStatus() { return amount; }
  static double rate() { return interestRate; }
  static void rate(double);
 private:
  std::string owner;
  double amount;
  static double interestRate;
  static double initRate();
};

double Account::interestRate = initRate();

void  Account::rate(double newRate)
{
  interestRate = newRate;
}

double Account::initRate() 
{
  return 0.05;
}


int main()
{

  Account acc1("Anna Tarasova", 1000);
  
  std::cout << acc1.accountStatus() << "\n";
  std::cout << Account::rate() << std::endl;
  acc1.calculate();
  Account::rate(0.06);
  acc1.calculate();
  std::cout << acc1.accountStatus() << "\n";
  std::cout << Account::rate() << std::endl;

  Account acc2("Alexander Tarasov");
  std::cout << acc2.accountStatus() << "\n";
  
  
  return 0;
}
   
