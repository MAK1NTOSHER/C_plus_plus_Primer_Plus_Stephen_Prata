#pragma once
#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_
#include <string>

class BankAccount
{
private:
	std::string name;
	std::string account_number;
	double balance;
public:
	BankAccount() { name = ""; account_number = ""; balance = 0; } // конструктор по умолчанию
	BankAccount(const std::string &str, const std::string &num, double bal = 0.0); // конструктор
	~BankAccount(); // деструктор
	void refill(double cash); //пополнение счета
	void cash_withdrawal(double cash); // списание со счета
	void show() const;
};

#endif
