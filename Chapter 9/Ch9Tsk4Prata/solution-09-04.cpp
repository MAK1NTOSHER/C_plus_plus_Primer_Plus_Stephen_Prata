#include <iostream>
#include "Sales.h"

int main()
{
	SALES::Sales a{};
	SALES::Sales b{};
	double mas[4] = { 10.5, 50, 5, 30.7 };
	SALES::setSales(a, mas, 4);
	SALES::setSales(b);
	SALES::showSales(a);
	SALES::showSales(b);
	return 0;
}