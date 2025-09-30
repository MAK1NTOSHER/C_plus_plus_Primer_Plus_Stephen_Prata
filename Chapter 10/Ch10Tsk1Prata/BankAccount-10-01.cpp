#include <iostream>
#include <string>
#include "BankAccount.h"

BankAccount::BankAccount(const std::string& str, const std::string& num, double bal)
{
	name = str;
	account_number = num;
	balance = bal;
}

BankAccount::~BankAccount()
{

}

void BankAccount::refill(double cash)
{
	balance += cash;
	std::cout << "\nBalanse has been replenished. Funds transferred to the account " << account_number << std::endl;
	std::cout << "Your Balance: " << balance << std::endl;
}

void BankAccount::cash_withdrawal(double cash)
{
	if (cash > balance)
	{
		std::cout << "\nInsufficient funds to write off!";
	}
	else
	{
		balance -= cash;
		std::cout << "\nFunds has been debited" << std::endl;
		std::cout << "Your Balance : " << balance << std::endl;
	}
}

void BankAccount::show() const
{
	using std::cout;
	cout << "\n###Information About Account###\n";
	cout << "Name: " << name << std::endl;
	cout << "Account Number: " << account_number << std::endl;
	cout << "Balance: " << balance << std::endl;
}