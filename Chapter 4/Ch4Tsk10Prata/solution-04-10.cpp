#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<double, 3> run{};
	double average = 0; 
	cout << "Enter the result of runs:" << endl;
	cout << "First one: ";
	cin >> run[0];
	cout << "Second one: ";
	cin >> run[1];
	cout << "Third one: ";
	cin >> run[2];
	average = (run[0] + run[1] + run[2]) / 3;
	cout << "Average result of run: " << average;
	return 0;
}