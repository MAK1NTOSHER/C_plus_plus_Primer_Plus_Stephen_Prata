#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	int sum = 0;
	cout << "Enter the number: ";
	cin >> num;
	while (num != 0)
	{
		sum += num;
		cout << "Accamulate amount: " << sum << endl;
		cout << "Enter the next number: ";
		cin >> num;
	}
	return 0;
}