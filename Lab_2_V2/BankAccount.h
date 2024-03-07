#pragma once
#include <string>
using namespace std;

class BankAccount
{
private:
	double balance;
	double withdrawammount;
	double depositammount;
	string name;
public:
	BankAccount(string);
	BankAccount(string, double, double, double);
	void Withdraw(double);
	void Deposit(double);
	void SetBalance(double);
	void Setwithdrawammount(double);
	void Setdepositammount(double);
	string getname();
	double getbalance();
	double getwithdrawammount();
	double getdepositammount();
};
