// arrfun3.cpp -- функция работы с массивами и применение const 
#include <iostream> 

const int Max = 5;

// Прототипы функций 
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
		cout << "Enter revaluation factor: "; // ввод коэффициента переоценки 
		double factor;
		while (!(cin >> factor)) // неправильный ввод 
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: "; // повторный запрос на ввод числа 
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
			cout << "Bad input; input process terminated.\n"; // процесс ввода прекращен 
			break;
		}
		else if (temp < 0) // сигнал завершения 
			break;
		*pt = temp;
	}
	return pt;
}

// Следующая функция может использовать, но не изменять, массив по адресу аг 
void show_array(double* begin, double* end)
{
	using namespace std;
	int i = 1;
	// Вывод содержимого массива аг 
	for (double* pt = begin; pt != end; pt++, i++)
	{
		cout << "Property #" << i << ": $";
		cout << *pt << endl;
	}
}

// Умножает на г каждый элемент аг[] 
void revalue(double r, double* begin, double* end)
{
	for (double* pt = begin; pt != end; pt++)
		*pt *= r;
}