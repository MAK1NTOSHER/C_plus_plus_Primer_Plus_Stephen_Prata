#include <iostream>

unsigned factorial(unsigned);

int main()
{
	unsigned n = 0;
	std::cout << "Enter a number for calculate its factorial: ";

	while (std::cin >> n)
	{
		std::cout << "Factorial of " << n << " equals " << factorial(n);
	}
	return 0;
}

unsigned factorial(unsigned n)
{
	unsigned fact = 1;
	fact = n == 0 ? 1 : n * factorial(n - 1);
	return fact;
}