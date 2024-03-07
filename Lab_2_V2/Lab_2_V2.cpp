#include <iostream>
#include <string>
#include "BankAccount.h"
#include <iomanip>
#include <stdlib.h>
#include <stdbool.h>
using namespace std;

int main()
{
	const auto SCREEN_WIDTH = 120;
	string input;
	string name;
	double balance, withdraw, deposit;
	withdraw = 0;
	deposit = 0;
	cout << "Welcome to Scooby\n";
	cout << "This enter the name associated with your account with is --> ";
	cin >> name;
	cout << "Enter the ammount total inside of your account --> ";
	cin >> balance;
	cout << "Total Balance --> " << balance << endl;
	cout << "Enter option:\n-Withdraw\n-Deposit\n-End Transaction\n--> ";
	BankAccount person(name, balance, withdraw, deposit);
	cin >> input;
	if (input == "Withdraw")
	{
		cout << setfill('*') << setw(static_cast<streamsize>(SCREEN_WIDTH) + 1) << " " << setfill(' ');
		cout << "Please enter the withdraw ammount --> ";
		cin >> withdraw;
		person.Setwithdrawammount(withdraw);
		person.Withdraw(withdraw);
		cout << "Total Balance --> " << person.getbalance() << endl;
		cout << "Enter option:\n-Continue Withdrawing (1)\n-End Withdraw (2)\n--> ";
		cin >> input;
	}
	while (input == "Continue Withdrawing" or "1")
	{
		cout << "Please enter the withdraw ammount --> ";
		cin >> withdraw;
		person.Setwithdrawammount(withdraw);
		person.Withdraw(withdraw);
		cout << "Total Balance --> " << person.getbalance() << endl;
		cout << "Enter option:\n-Continue Withdrawing (1)\n-End Withdraw (2)\n--> ";
		cin >> input;
		if (input == "2")
		{
			return 0;
		}
	}	
	if (input == "Deposit")
	{
		cout << setfill('*') << setw(static_cast<streamsize>(SCREEN_WIDTH) + 1) << " " << setfill(' ');
		cout << "Please enter the deposit ammount --> ";
		cin >> deposit;
		person.Setdepositammount(deposit);
		person.Deposit(deposit);
		cout << "Total Balance --> " << person.getbalance() << endl;
		cout << "Enter option:\n-Continue Depositing (1)\n-End Deposit (2)\n--> ";
		cin >> input;
	}
	while (input == "Continue Depositing" or "1")
	{
		cout << "Please enter the deposit ammount --> ";
		cin >> deposit;
		person.Setdepositammount(deposit);
		person.Deposit(deposit);
		cout << "Total Balance --> " << person.getbalance() << endl;
		cout << "Enter option:\n-Continue Depositing (1)\n-End Deposit (2)\n--> ";
		cin >> input;
		bool input;
		if (input = 2)
		{
			cout << setfill('*') << setw(static_cast<streamsize>(SCREEN_WIDTH) + 1) << " " << setfill(' ');
			cout << "Total Balance --> " << person.getbalance() << endl;
			cout << "Enter option:\n-Withdraw\n-Deposit\n-End Transaction\n--> ";
			cin >> input;
			break;
		}
		if (input = 1)
		{
			break;
		}
	}
	if (input == "End Withdraw" or "End Deposit" or "2")
	{
		cout << setfill('*') << setw(static_cast<streamsize>(SCREEN_WIDTH) + 1) << " " << setfill(' ');
		cout << "Total Balance --> " << person.getbalance() << endl;
		cout << "Enter option:\n-Withdraw\n-Deposit\n-End Transaction\n--> ";
		cin >> input;
	}
	if (input == "End Transaction")
	{
		cout << setfill('*') << setw(static_cast<streamsize>(SCREEN_WIDTH) + 1) << " " << setfill(' ');
		cout << "\nThanks, have a great day\n";
	}
}