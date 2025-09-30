// A времена года массив const char*, расходы по временам года в массиве
#include <iostream> 

const int Seasons = 4;
const char* Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };

void fill(double arr[]); 
void show(double arr[]);

int main()
{
	double expenses[Seasons];
	fill(expenses);
	show(expenses);
	return 0;
}

void fill(double arr[])
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> arr[i];
	}
}

void show(double arr[])
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << arr[i] << endl;
		total += arr[i];
	}
	cout << "Total Expenses: $" << total << endl;
}


// B: времена года массив const char*, расходы по временам года в структуре
#include <iostream>  

const int Seasons = 4;
const char* Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };

struct expenses
{
	double exp;
};

void fill(expenses[]); 
void show(expenses[]);

int main()
{
	expenses ExpBySeasons[Seasons];
	fill(ExpBySeasons);
	show(ExpBySeasons);
	return 0;
}

void fill(expenses pa[])
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: "; // ввод расходов по временам года 
		cin >> pa[i].exp;
	}
}

void show(expenses pa[])
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << pa[i].exp << endl;
		total += pa[i].exp;
	}
	cout << "Total Expenses: $" << total << endl;
}