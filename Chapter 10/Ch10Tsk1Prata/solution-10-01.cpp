#include <iostream>
#include "BankAccount.h"

int main()
{
	BankAccount BMW("BMW", "243678", 130000);
	BankAccount Mercedes("Mercedes", "001028", 300000);
	BMW.show();
	Mercedes.show();
	BMW.cash_withdrawal(100000);
	BMW.show();
	Mercedes.refill(10000);
	Mercedes.show();
	BMW.cash_withdrawal(78900000);
	return 0;
}