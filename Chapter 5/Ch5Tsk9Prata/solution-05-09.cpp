#include <iostream>
#include <string>

int main()
{
	std::string word;
	int cnt = 0;
	std::cout << "Enter the words (for exit enter \"done\"): " << std::endl;
	do
	{
		std::cin >> word; // ������ ����� ������� cin, �.� �� ������ �� ����������� ������ ����� �������
						  // ����� ������� ���������� ������ �� ������
		cnt++;
	} while (word != "done");
	std::cout << "You enter " << cnt - 1 << " words.";
	return 0;
}