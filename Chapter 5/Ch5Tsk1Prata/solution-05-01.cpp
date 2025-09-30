#include <iostream>

using namespace std;

int main()
{
	int begin = 0;
	int end = 0;
	int sum = 0;
	cout << "Enter the first number: ";
	cin >> begin;
	cout << "Enter the second number: ";
	cin >> end;
	for (int i = begin; i <= end; i++)
	{
		sum += i;
	}
	cout << "Sum of the integers between " << begin << " and " << end << " equals = " << sum;
	return 0;
}