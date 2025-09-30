#include <iostream>

using namespace std;

int main()
{
	double Kleo = 100;
	double Dafna = 100;
	int year = 1;
	do
	{
		Dafna += 10;
		Kleo *= 1.05;
		cout << "Dafna's balans after " << year << " year " << "=\t" << Dafna << endl;
		cout << "Kleo's balans after " << year << " year " << "=\t" << Kleo << endl;
		year++;
	} while (Dafna > Kleo);
	cout << "Number of years: " << year - 1;
	return 0;
}