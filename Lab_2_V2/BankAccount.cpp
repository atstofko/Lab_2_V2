#include "BankAccount.h"
#include <string>
using namespace std;

BankAccount::BankAccount(string name)
{
	this->balance = 0;
	this->name = name;
	this->withdrawammount = 0;
	this->depositammount = 0;
}

BankAccount::BankAccount(string name, double ammount, double withdraw, double deposit)
{
	this->balance = ammount;
	this->name = name;
	this->withdrawammount = withdraw;
	this->depositammount = deposit;
}
void BankAccount::Withdraw(double)
{
	if (this->balance > this->withdrawammount and this->withdrawammount < 500)
	{ 
		this->balance = this->balance - this->withdrawammount;
	}
	if (this->balance < this->withdrawammount and this->withdrawammount > 500)
	{
		this->balance;
	}
}
void BankAccount::Deposit(double)
{
	if (1000 > this->depositammount)
	{
		this->balance = this->balance + this->depositammount;
	}
	if (1000 < this->depositammount)
	{
		this->balance;
	}
}
void BankAccount::SetBalance(double ammount)
{
	this->balance = ammount;
}
void BankAccount::Setdepositammount(double deposit)
{
	this->depositammount = deposit;
}
void BankAccount::Setwithdrawammount(double withdraw)
{
	this->withdrawammount = withdraw;
}
string BankAccount::getname()
{
	return this->name;
}
double BankAccount::getbalance()
{
	return this->balance;
}
double BankAccount::getdepositammount()
{
	return this->depositammount;
}
double BankAccount::getwithdrawammount()
{
	return this->withdrawammount;
}