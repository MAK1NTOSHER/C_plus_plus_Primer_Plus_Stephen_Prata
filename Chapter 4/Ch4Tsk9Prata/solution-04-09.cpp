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
	CandyBar* snack = new CandyBar[3];
	cout << "Enter the information:" << endl;
	cout << "Name1: ";
	cin.getline(snack->name, 20); // 1-й способ через указатель (->)
	cout << "Weight1: ";
	cin >> snack[0].weight; // 2-й способ через имя масиива стуктур (.)
	cout << "Calories1: ";
	cin >> (*snack).calories; // 3-й способ через разыменование указателя (.)
	cout << "Name2: ";
	cin.get(); // убираем из очереди на ввод символ начала новой строки, который остается после cin
	cin.getline((*(snack + 1)).name, 20); 
	cout << "Weight2: ";
	cin >> snack[1].weight;
	cout << "Calories2: ";
	cin >> (snack + 1)->calories;
	cin.get();
	cout << "Name3: ";
	cin.getline((snack + 2)->name, 20);
	cout << "Weight3: ";
	cin >> snack[2].weight;
	cout << "Calories3: ";
	cin >> snack[2].calories;
	cin.get();
	cout << "FIRST: " << endl;
	cout << "Name: " << snack->name << endl;
	cout << "Weight: " << snack[0].weight << endl;
	cout << "Calories: " << snack[0].calories << endl << endl;
	cout << "SECOND: " << endl;
	cout << "Name: " << (snack + 1)->name << endl;
	cout << "Weight: " << snack[1].weight << endl;
	cout << "Calories: " << snack[1].calories << endl << endl;
	cout << "THIRD: " << endl;
	cout << "Name: " << snack[2].name << endl;
	cout << "Weight: " << snack[2].weight << endl;
	cout << "Calories: " << snack[2].calories << endl;
	delete[] snack;
	return 0;
}