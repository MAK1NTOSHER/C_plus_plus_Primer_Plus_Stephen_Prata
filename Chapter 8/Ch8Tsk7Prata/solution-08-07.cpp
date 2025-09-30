// tempover.��� � ���������� �������� 
#include <iostream> 

template <typename T> // ������ � 
T SumArray(T arr[], int n);

template <typename T> // ������ � 
T SumArray(T* arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main()
{
	using namespace std;
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] =
	{
	{"Ima Wolfe", 2400.0},
	{"Ura Foxe", 1300.0},
	{"Iby Stout", 1800.0}
	};
	double* pd[3];
	// ��������� ���������� �� ����� amount �������� � mr_E 
	for (int i = 0; i < 3; i ++)
		pd[i] = &mr_E[i].amount;
	cout << "Listing Mr. E's counts of things :\n";
	// things - ������ �������� int 
	SumArray(things, 6); // ���������� ������ � 
	cout << "Listing Mr. E's debts:\n";
	// pd - ������ ���������� �� double 
	SumArray(pd, 3); // ���������� ������ � (����� ������������������) 
	return 0;
}

template <typename T>
T SumArray(T arr[], int n)
{
	using namespace std;
	T sum{};
	cout << "template A\n";
	for (int i = 0; i < n; i++)
		sum += arr[i];
	cout << "Total numbers of things: " << sum << endl;
	return sum;
}

template <typename T>
T SumArray(T* arr[], int n)
{
	using namespace std;
	T sum{};
	cout << "template B\n";
	for (int i = 0; i < n; i ++)
		sum += *arr[i];
	cout << "Sum of all debts " << sum << endl;
	return sum;
}