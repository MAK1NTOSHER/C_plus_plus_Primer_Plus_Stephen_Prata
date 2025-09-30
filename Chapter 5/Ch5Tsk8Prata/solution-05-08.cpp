#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)

const int ArSize = 20;

int main()
{
	char mas[ArSize]{};
	int cnt = 0;
	std::cout << "Enter the words (for exit enter \"done\"): " << std::endl;
	do
	{
		std::cin >> mas; // вводим через обычный cin, т.к он читает до разделяющих знаков между словами
						 // таким образом происходит чтение по словам
		cnt++;
	} while (strcmp(mas, "done")); // сравниваем строки с тиле C
	std::cout << "You enter " << cnt - 1 << " words.";
	return 0;
}