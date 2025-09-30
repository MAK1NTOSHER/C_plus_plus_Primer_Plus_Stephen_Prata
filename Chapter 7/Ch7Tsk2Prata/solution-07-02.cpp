#include <iostream>

const int SIZE = 10;

int fill(double*, int);
void display(const double*, int);
double average(const double*, int);

int main()
{
	double golf[SIZE]{};
	int limit = 0;
	double avg = 0;
	limit = fill(golf, SIZE);
	display(golf, limit);
	std::cout << average(golf, limit);
	return 0;
}

int fill(double* ar, int n)
{
	int i = 0;
	std::cout << "Enter the results: " << std::endl;
	for (i = 0; i < n; i++)
	{
		std::cout << "#" << i + 1 << ": ";
		std::cin >> *(ar + i);
		if (!std::cin)
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Bad input" << std::endl;;
			break;
		}
		else if (*(ar + i) < 0)
		{
			break;
		}
	}
	return i;
}

void display(const double* ar, int n)
{
	std::cout << "All results: " << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << *(ar + i) << " ";
	}
	std::cout << std::endl;
}

double average(const double* ar, int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum += *(ar + i);
	std::cout << "Average mean of results: ";
	return sum / n;
}

//int fill(double [], int);
//void display(const double [], int);
//double average(const double [], int);
//
//int main()
//{
//	double golf[SIZE]{};
//	int limit = 0;
//	double avg = 0;
//	limit = fill(golf, SIZE);
//	display(golf, limit);
//	std::cout << average(golf, limit);
//	return 0;
//}
//
//int fill(double ar[], int n)
//{
//	int i = 0;
//	std::cout << "Enter the results: " << std::endl;
//	for (i = 0; i < n; i++)
//	{
//		std::cout << "#" << i + 1 << ": ";
//		std::cin >> ar[i];
//		if (!std::cin)
//		{
//			std::cin.clear();
//			while (std::cin.get() != '\n')
//				continue;
//			std::cout << "Bad input" << std::endl;;
//			break;
//		}
//		else if (ar[i] < 0)
//		{
//			break;
//		}
//	}
//	return i;
//}
//
//void display(const double ar[], int n)
//{
//	std::cout << "All results: " << std::endl;
//	for (int i = 0; i < n; i++)
//	{
//		std::cout << ar[i] << " ";
//	}
//	std::cout << std::endl;
//}
//
//double average(const double ar[], int n)
//{
//	double sum = 0;
//	for (int i = 0; i < n; i++)
//		sum += ar[i];
//	std::cout << "Average mean of results: ";
//	return sum / n;
//}