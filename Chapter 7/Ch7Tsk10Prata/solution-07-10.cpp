#include <iostream>

double calculate(double x, double y, double (*ptr)(double x, double y));
double add(double, double);
double multiplication(double, double);
double divide(double, double);
double sum_of_square(double, double);

int main()
{
	double r, l;
	double (*pf[4])(double, double) = { add, multiplication, divide, sum_of_square }; // массив из указателей на функции
	std::cout << "Enter a couple of numbers: ";
	std::cin >> r >> l;
	while (std::cin)
	{
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Address of func ";
			std::cout << &pf[i] << " ";
			std::cout << calculate(r, l, pf[i]) << std::endl;
		}
		std::cout << "Enter another pair of numbers: ";
		std::cin >> r >> l;
	}
	return 0;
}

double add(double x, double y)
{
	std::cout << "Addition =  ";
	return x + y;
}

double multiplication(double x, double y)
{
	std::cout << "Multiplication = ";
	return x + y;
}

double divide(double x, double y)
{
	std::cout << "Division = ";
	return x / y;
}

double sum_of_square(double x, double y)
{
	double result = (x * x) + (y * y);
	std::cout << "Sum of squares = ";
	return result;
}

double calculate(double x, double y, double (*ptr)(double x, double y))
{
	return ptr(x, y);
}