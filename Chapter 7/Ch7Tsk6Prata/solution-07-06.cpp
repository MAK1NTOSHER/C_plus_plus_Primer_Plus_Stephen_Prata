#include <iostream>

const int SIZE = 10;

int Fill_array(double*, int);
void Show_array(const double[], int);
void Reverse_array(double*, int);

int main()
{
	double array[SIZE];
	int n = 0;
	n = Fill_array(array, SIZE);
	std::cout << "You enter " << n << " elements.\n";
	Show_array(array, n);
	Reverse_array(array, n);
	Show_array(array, n);
	return 0;
}

int Fill_array(double* ar, int n)
{
	int limit = 0;
	std::cout << "Enter the elements of array: " << std::endl;
	for (limit = 0; limit < n; limit++)
	{
		std::cout << "Elem #" << limit << ": ";
		std::cin >> *(ar + limit);
		if (!std::cin)
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Bad input\n";
			break;
		}
	}
	return limit;
}

void Show_array(const double ar[], int n)
{
	std::cout << "Element of array: " << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << "#" << i << " " << ar[i] << std::endl;
	}
}

// Reverse an array except for the first and last elements
void Reverse_array(double* ar, int n)
{
	double temp = 0;
	for (int i = 0; i < n / 2; i++)
	{
		if (i == 0)
			continue;
		temp = *(ar + i);
		*(ar + i) = *(ar + n - 1 - i);
		*(ar + n - 1 - i) = temp;
	}
}