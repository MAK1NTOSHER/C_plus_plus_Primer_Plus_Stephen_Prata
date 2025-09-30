#include <iostream>

const int Max = 10;

int main()
{
	double donations[10]{};
	double n = 0;
	int i = 0;
	double sum = 0;
	double average = 0;
	std::cout << "Enter the donations: " << std::endl;
	std::cout << "donation #" << i << ": ";
	while (std::cin >> donations[i])
	{
		i++;
		std::cout << "donation #" << i << ": ";
		if (i >= Max)
			break;
	}
	for (int k = 0; k < i; k++)
	{
		sum += donations[k];
	}
	std::cout << "Sum of massive: " << sum << std::endl;
	average = sum / i;
	std::cout << "Average means of massive: " << average << std::endl;
	std::cout << "Means more then average: " << std::endl;
	for (double n : donations)
	{
		if (n > average)
		{
			std::cout << n << " ";
		}
	}

	return 0;
}