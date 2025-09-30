#include <iostream>

int main()
{
	double salary = 0;
	double tax = 0;
	std::cout << "Enter your salary: ";
	while (std::cin >> salary)
	{
		if (salary < 0)
		{
			break;
		}
		else if ((0 <= salary) && (salary <= 5000))
		{
			tax = salary * 0.0;
		}
		else if ((5000 < salary) && (salary <= 15000))
		{
			tax = (5000 * 0.0) + ((salary - 5000) * 0.1);
		}
		else if ((15000 < salary) && (salary <= 35000))
		{
			tax = (5000 * 0.0) + (10000 * 0.1) + ((salary - 15000) * 0.15);
		}
		else
		{
			tax = (5000 * 0.0) + (10000 * 0.1) + (20000 * 0.15) + ((salary - 35000) * 0.2);
		}
		std::cout << "The tax equal: " << tax << std::endl;
		std::cout << "Enter the next: ";
	};

	return 0;
}