#include <iostream>

struct bop
{
	char fullname[30]; // реальное имя
	char title[30]; // должность
	char bopname[30]; // секретное имя БОП
	int preference; // 0 = полное имя, 1 = титул, 2 = имя БОП
};

int main()
{
	char ch;
	bop Orden[5] =
	{
		{"Wimp Macho","Data Scientists", "Freak", 1},
		{"Raki Rhodes", "Junior Programmer", "NUB", 0},
		{"Celia Laiter", "Pintester", "Rat", 2},
		{"Hoppy Hipman", "Team Leader", "BOSS", 2},
		{"Pat Hand", "Semior Programmer", "Wind", 0}
	};
	std::cout << "Benevolent Order of Programmers Report" << std::endl;
	std::cout << "a. display by name\t\tb. display by title" << std::endl;
	std::cout << "c. display by bopname\t\td. display by preference" << std::endl;
	std::cout << "q. quit" << std::endl;
	std::cout << "Enter your choice: ";
	std::cin >> ch;
	while (!(ch == 'q'))
	{
		switch (ch)
		{
		case 'a':
			for (int i = 0; i < 5; i++)
			{
				std::cout << Orden[i].fullname << std::endl;
			};
			break;

		case 'b':
			for (int i = 0; i < 5; i++)
			{
				std::cout << Orden[i].title << std::endl;
			};
			break;

		case 'c':
			for (int i = 0; i < 5; i++)
			{
				std::cout << Orden[i].bopname << std::endl;
			};
			break;

		case 'd':
			for (int i = 0; i < 5; i++)
			{
				switch (Orden[i].preference)
				{
				case 0:
					std::cout << Orden[i].fullname << std::endl;
					break;
				case 1:
					std::cout << Orden[i].title << std::endl;
					break;
				case 2:
					std::cout << Orden[i].bopname << std::endl;
					break;
				default:
					break;
				};
			};
			break;
		default:
			break;
		};
		std::cout << "Next Choice: ";
		std::cin >> ch;
	};
	std::cout << "Bye!";
	return 0;
}