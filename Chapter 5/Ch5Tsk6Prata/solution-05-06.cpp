#include <iostream>

using namespace std;

const int Year = 3;
const int Month = 12;

int main()
{
	int sales[Year][Month]{};
	int book_per_f_year = 0;
	int book_per_s_year = 0;
	int book_per_t_year = 0;
	int sum = 0;
	const char* month[12] =
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
	for (int i = 0; i < Year; i++)
	{
		cout << "For the " << i + 1 << " year:" << endl;
		for (int j = 0; j < Month; j++)
		{
			cout << "Number of books sold in " << month[j] << " of the " << i + 1 << " year ";
			cin >> sales[i][j];
		}
	}
	for (int j = 0; j < Month; j++)
	{
		book_per_f_year += sales[0][j];
	}
	cout << "Sold for the first year: " << book_per_f_year << endl;
	for (int j = 0; j < Month; j++)
	{
		book_per_s_year += sales[1][j];
	}
	cout << "Sold for the second year: " << book_per_s_year << endl;
	for (int j = 0; j < Month; j++)
	{
		book_per_t_year += sales[2][j];
	}
	cout << "Sold for the third year: " << book_per_t_year << endl;
	sum = book_per_f_year + book_per_s_year + book_per_t_year;
	cout << "Sold for the all years: " << sum << endl;
	return 0;
}