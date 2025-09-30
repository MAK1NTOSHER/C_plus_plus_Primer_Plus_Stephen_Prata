#include <iostream>
#include "Sales.h"

SALES::Sales::Sales()
{
	double sales[QUATERS] = { 0.0 };
	average = 0;
	min = 0;
	max = 0;
}

SALES::Sales::Sales(const double ar[], int n)
{
	if (n < QUATERS)
	{
		for (int i = 0; i < n; i++)
			sales[i] = ar[i];
		for (int i = n; i < QUATERS; i++)
			sales[i] = 0;
	}
	else
	{
		for (int i = 0; i < QUATERS; i++)
			sales[i] = ar[i];
	}
	min = sales[0];
	max = sales[0];
	double sum = 0;
	for (int i = 0; i < QUATERS; i++)
	{
		sum += sales[i];
		max = sales[i] > max ? sales[i] : NULL;
		min = sales[i] < min ? sales[i] : NULL;
	}
	average = sum / QUATERS;
}

void SALES::Sales::setSales()
{
	int n = 0;
	std::cout << "\nEnter a number of sales: ";
	std::cin >> n;
	std::cin.get();
	double * ptr = new double[n];
	std::cout << "Enter the sales: " << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << "#" << i << ": ";
		std::cin >> ptr[i];
	}
	*this = Sales(ptr, n);
}

void SALES::Sales::showSales() const
{
	std::cout << "\n###SALES###" << std::endl;
	std::cout << "Sales: ";
	for (int i = 0; i < QUATERS; i++)
	{
		std::cout << sales[i] << " ";
	}
	std::cout << "\nAverage: " << average << std::endl;
	std::cout << "Min: " << min << std::endl;
	std::cout << "Max: " << max << std::endl;
}