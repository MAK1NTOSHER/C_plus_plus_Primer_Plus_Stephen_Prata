#include <iostream>

using namespace std;

int main()
{
	struct pizza
	{
		char name[30];
		int diametr;
		double weight;
	};
	pizza user{};
	cout << "Enter the information" << endl;
	cout << "Name of pizza: ";
	cin.getline(user.name, 30);
	cout << "Diametr of pizza: ";
	cin >> user.diametr;
	cout << "Weight of pizza: ";
	cin >> user.weight;
	cout << "\nName: " << user.name;
	cout << "\nDiametr: " << user.diametr;
	cout << "\nWeight: " << user.weight;
	return 0;
}