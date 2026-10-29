/*
  NAME; COLLINS MUTAHI MWANGI
  ADM: CT101/G/26624/25
  COURSE: COMPUTER SCIENCE
  GROUP B
  YERA 2*/
#include <iostream>
using namespace std;
class BankAccount
{
private:
  string Acc_Holder_Name;
  int Acc_Number;
  double Acc_Balance;

public:
  // intialization
  BankAccount(string Name, int number, double bal)
  {
    Acc_Holder_Name = Name;
    Acc_Number = number;
    Acc_Balance = bal;
    cout << "==========================================" << endl;
    cout << "Account Created Successfully" << endl;
  }
  // display function for printing acc details
  void displayAccount()
  {
    cout << "==========================================" << endl;
    cout << "Holders Name:" << Acc_Holder_Name << endl;
    cout << "Account Number:" << Acc_Number << endl;
    cout << "Account Balance:" << Acc_Balance << endl;
    cout << "==========================================" << endl;
  }
  // destructor
  ~BankAccount()
  {
    cout << "==========================================" << endl;
    cout << "Account Closed successfully!" << endl;
    cout << "==========================================" << endl;
  }
};
int main()
{ // constructor initialization object
  BankAccount bank("Mwangi", 2490, 22000.0);
  bank.displayAccount();
  return 0;
}