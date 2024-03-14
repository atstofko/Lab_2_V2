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
	cout << "Enter the name is account is associated with --> ";
	cin >> name;
	cout << "Enter the total ammount inside of your account --> ";
	cin >> balance;
	cout << "Total Balance --> " << balance << endl;
	cout << "Enter option:\n-Withdraw\n-Deposit\n-Finish Transaction\n--> ";
	BankAccount person(name, balance, withdraw, deposit);
	cin >> input;
	//Input for the withdraw
	if (input == "Withdraw" or "withdraw")
	{
		withdraw:
		cout << setfill('*') << setw(static_cast<streamsize>(SCREEN_WIDTH) + 1) << " " << setfill(' ');
		cout << "Please enter the withdraw ammount --> ";
		cin >> withdraw;
		person.Setwithdrawammount(withdraw);
		person.Withdraw(withdraw);
		cout << "Total Balance --> " << person.getbalance() << endl;
		cout << "Enter option:\n-Continue Withdrawing (1)\n-End Withdraw (2)\n--> ";
		cin >> input;
		if (input == "1")
		{
			goto withdraw;
		}
		else if (input == "2")
		{
			(input = "End Withdraw");
		}
	}
	//Input for the deposit
	if (input == "Deposit" or "deposit")
	{
		deposit:
		cout << setfill('*') << setw(static_cast<streamsize>(SCREEN_WIDTH) + 1) << " " << setfill(' ');
		cout << "Please enter the deposit ammount --> ";
		cin >> deposit;
		person.Setdepositammount(deposit);
		person.Deposit(deposit);
		cout << "Total Balance --> " << person.getbalance() << endl;
		cout << "Enter option:\n-Continue Depositing (1)\n-End Deposit (2)\n--> ";
		cin >> input;
		if (input == "1")
		{
		goto deposit;
		}
		else if (input == "2")
		{
			(input = "End Deposit");
		}
	}
	//Input after ending each with withdraw or deposit
	else if (input == "End Withdraw" or "End Deposit")
	{
		cout << setfill('*') << setw(static_cast<streamsize>(SCREEN_WIDTH) + 1) << " " << setfill(' ');
		cout << "Total Balance --> " << person.getbalance() << endl;
		cout << "Enter option:\n-Withdraw\n-Deposit\n-Finish Transaction\n--> ";
		cin >> input;
		if (input == "Withdraw" or "1")
		{
			goto withdraw;
		}
		if (input == "Deposit" or "2")
		{
			goto deposit;
		}
	}
	if (input == "Finish Transaction")
	{
		//Ending
		cout << setfill('*') << setw(static_cast<streamsize>(SCREEN_WIDTH) + 1) << " " << setfill(' ');
		cout << "\nThanks, have a great day\n" << endl;
	}
	else {
		return 0;
	}
}