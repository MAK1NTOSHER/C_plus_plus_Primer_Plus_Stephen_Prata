#include <iostream>
#include "Sales.h"

namespace SALES
{
	void setSales(Sales& s, const double ar[], int n)
	{
		double sum = 0;
		s.max = ar[0];
		s.min = ar[0];
		for (int i = 0; i < QUATERS; i++)
		{
			s.sales[i] = ar[i];
			ar[i] > s.max ? s.max = ar[i] : NULL;
			ar[i] < s.min ?	s.min = ar[i] : NULL;
			sum += ar[i];
		}
		s.average = sum / QUATERS;
	}

	void setSales(Sales& s)
	{
		double sum = 0;
		std::cout << "Enter all Sales: ";
		for (int i = 0; i < QUATERS; i++)
		{
			std::cin >> s.sales[i];
		}
		std::cout << std::endl;
		s.max = s.sales[0];
		s.min = s.sales[0];
		for (int i = 0; i < QUATERS; i++)
		{
			s.sales[i] > s.max ? s.max = s.sales[i] : NULL;
			s.sales[i] < s.min ? s.min = s.sales[i] : NULL;
			sum += s.sales[i];
		}
		s.average = sum / QUATERS;
	}

	void showSales(const Sales& s)
	{
		std::cout << "-----------SALES-----------\n";
		std::cout << "All Sales: ";
		for (double a : s.sales)
			std::cout << a << " ";
		std::cout << "\nAverage: " << s.average << std::endl;
		std::cout << "MAX Sales: " << s.max << std::endl;
		std::cout << "MIN Sales: " << s.min << std::endl;
		std::cout << std::endl;
	}
}