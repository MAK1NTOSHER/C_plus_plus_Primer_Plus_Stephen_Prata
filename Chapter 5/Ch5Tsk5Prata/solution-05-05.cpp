#include <iostream>

using namespace std;

int main()
{
	int books_per_month[12]{};
	int sum = 0;
	const char* months[12]
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	for (int i = 0; i < 12; i++)
	{
		cout << "Number of books sold in " << months[i] << " ";
		cin >> books_per_month[i];
	}
	for (int i : books_per_month)
		sum += i;
	cout << "Total sold: " << sum;
	return 0;
}
