#include <iostream>

int main()
{
	using namespace std;

	struct CandyBar
	{
		char name[20];
		double weight;
		int calories;
	};

	CandyBar snack[3]
	{ 
		{"Mocha Munch", 2.3, 350},
		{"Tiramisu", 230.2, 1000},
		{"Cookies", 12.3, 240}
	};

	cout << "FIRST: " << endl;
	cout << "Name: " << snack[0].name << endl;
	cout << "Weight: " << snack[0].weight << endl;
	cout << "Calories: " << snack[0].calories << endl << endl;
	cout << "SECOND: " << endl;
	cout << "Name: " << snack[1].name << endl;
	cout << "Weight: " << snack[1].weight << endl;
	cout << "Calories: " << snack[1].calories << endl << endl;
	cout << "THIRD: " << endl;
	cout << "Name: " << snack[2].name << endl;
	cout << "Weight: " << snack[2].weight << endl;
	cout << "Calories: " << snack[2].calories << endl;
	return 0;
}