// arrfun3.cpp -- ������� ������ � ��������� � ���������� const 
#include <iostream> 

const int Max = 5;

// ��������� ������� 
double* fill_array(double* begin, int limit);
void show_array(double* begin, double* end); 
void revalue(double r, double* begin, double* end);

int main()
{
	using namespace std;
	double properties[Max];
	double* end = fill_array(properties, Max);
	show_array(properties, end);
	if ((end - properties) > 0)
	{
		cout << "Enter revaluation factor: "; // ���� ������������ ���������� 
		double factor;
		while (!(cin >> factor)) // ������������ ���� 
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: "; // ��������� ������ �� ���� ����� 
		}
		revalue(factor, properties, end);
		show_array(properties, end);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}

double* fill_array(double* begin, int limit)
{
	using namespace std;
	double temp;
	int i = 1;
	double* pt;
	for (pt = begin; pt != begin + limit; pt++, i++)
	{
		cout << "Enter value #" << i << ": ";
			cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n"; // ������� ����� ��������� 
			break;
		}
		else if (temp < 0) // ������ ���������� 
			break;
		*pt = temp;
	}
	return pt;
}

// ��������� ������� ����� ������������, �� �� ��������, ������ �� ������ �� 
void show_array(double* begin, double* end)
{
	using namespace std;
	int i = 1;
	// ����� ����������� ������� �� 
	for (double* pt = begin; pt != end; pt++, i++)
	{
		cout << "Property #" << i << ": $";
		cout << *pt << endl;
	}
}

// �������� �� � ������ ������� ��[] 
void revalue(double r, double* begin, double* end)
{
	for (double* pt = begin; pt != end; pt++)
		*pt *= r;
}