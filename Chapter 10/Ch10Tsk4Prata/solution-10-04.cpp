#include <iostream>
#include "Sales.h"

int main()
{
	SALES::Sales a;
	double mas1[4] = { 130, 165, 123, 10 };
	double mas2[2] = { 1, 89 };
	double mas3[6] = { 130, 165, 123, 10, 9875, 65664565 };
	SALES::Sales b(mas1, 4);
	a.showSales();
	b.showSales();
	a.setSales();
	a.showSales();
	SALES::Sales c(mas3, 6);
	c.showSales();
	return 0;
}