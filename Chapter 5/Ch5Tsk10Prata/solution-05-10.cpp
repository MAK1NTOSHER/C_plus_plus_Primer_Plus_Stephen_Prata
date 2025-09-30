#include <iostream>

int main()
{
	int line = 0;
	std::cout << "Enter the number of lines: ";
	std::cin >> line;
	for (int i = 1; i <= line; i++)
	{
		for (int j = line - i; j; j--)
		{
			std::cout << ".";
		}
		for (int k = 1; k <= i; k++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	return 0;
}