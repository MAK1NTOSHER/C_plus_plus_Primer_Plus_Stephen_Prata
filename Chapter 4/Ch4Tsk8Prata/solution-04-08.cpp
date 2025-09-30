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
	pizza * user = new pizza;
	cout << "Enter the information" << endl;
	cout << "Diametr of pizza: ";
	cin >> user->diametr;
	cin.get();
	cout << "Name of pizza: ";
	cin.getline(user->name, 30);
	cout << "Weight of pizza: ";
	cin >> user->weight;
	cout << "\nName: " << user->name;
	cout << "\nDiametr: " << user->diametr;
	cout << "\nWeight: " << user->weight;
	delete user;
	return 0;
}