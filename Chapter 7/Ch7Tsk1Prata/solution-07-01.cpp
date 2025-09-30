#include <iostream>

double harmonic_mean(double, double);

int main()
{
	double a = 0;
	double b = 0;
	std::cout << "Enter a couple of numbers: ";
	std::cin >> a;
	std::cin >> b;
	while (!((a == 0) || (b == 0)))
	{
		std::cout << "Harmonic mean of " << a << " and " <<  b << " : " << harmonic_mean(a, b) << std::endl;
		std::cout << "Enter another couple of numbers: ";
		std::cin >> a;
		std::cin >> b;
	}
	return 0;
}

double harmonic_mean(double x, double y)
{
	return (2.0 * x * y) / (x + y);
}