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
		std::cin >> mas; // ������ ����� ������� cin, �.� �� ������ �� ����������� ������ ����� �������
						 // ����� ������� ���������� ������ �� ������
		cnt++;
	} while (strcmp(mas, "done")); // ���������� ������ � ���� C
	std::cout << "You enter " << cnt - 1 << " words.";
	return 0;
}