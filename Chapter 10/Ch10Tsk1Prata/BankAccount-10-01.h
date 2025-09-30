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
	BankAccount() { name = ""; account_number = ""; balance = 0; } // ����������� �� ���������
	BankAccount(const std::string &str, const std::string &num, double bal = 0.0); // �����������
	~BankAccount(); // ����������
	void refill(double cash); //���������� �����
	void cash_withdrawal(double cash); // �������� �� �����
	void show() const;
};

#endif
