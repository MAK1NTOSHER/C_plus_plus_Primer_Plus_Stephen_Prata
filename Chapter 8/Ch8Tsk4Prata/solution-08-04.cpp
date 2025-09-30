#include <iostream>
using namespace std;
#include <cstring>
#pragma warning(disable : 4996)

struct stringy
{
	char* str;
	int ct;
};

void set(stringy& a, const char* str);
void show(const stringy& a, int b = 1);
void show(const char* str, int b = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	// первым аргументом является ссылка,
	// Выделяет пространство для хранения копии testing
	// использует аргумент типа str структуры beany как указатель
	// на новый блок и
	// создает элемент структуры beany
	show(beany); // выводит строковый член структуры один раз
	show(beany, 2); // выводит строковый член структуры два раза
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing); // выводит строку testing один раз
	show(testing, 3); // выводит строку testing три раза
	show("Done!");
	return 0;
}

void set(stringy& a, const char* str)
{
	a.ct = strlen(str);
	a.str = new char[a.ct + 1];
	std::strcpy(a.str, str); // чтобы использовать strcpy() нужно отключить предупреждение C4996
	/*strcpy_s(a.str, a.ct + 1, str);*/	// для того чтобы избежать ошибки с функцией strcpy()
										// можно использовать функцию strcpy_s()
}

void show(const stringy& a, int b)
{
	for (int i = 0; i < b; i++)
		std::cout << a.str << std::endl;
	std::cout << std::endl;
}

void show(const char* str, int b)
{
	for (int i = 0; i < b; i++)
		std::cout << str << std::endl;
	std::cout << std::endl;
}