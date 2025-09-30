#include <iostream>
#include "Golf.h"

Golf::Golf(const char* name, int hc)
{
	strcpy_s(fullname, name);
	handicap = hc;
}

int Golf::setgolf()
{
	char str[Len]{};
	int hc = 0;
	std::cout << "\nEnter fullname of golfists: ";
	std::cin.getline(str, Len);
	if (str[0] == '/0')
		return 0;
	std::cout << "Enter handicap: ";
	std::cin >> hc;
	std::cin.get();
	Golf lcopy(str, hc);
	*this = lcopy;
	return 1;
}

void Golf::change_handicap(int hc)
{
	handicap = hc;
	std::cout << "\nHandicap has been changed" << std::endl;
}

void Golf::showgolf() const
{
	std::cout << "\n###Information about golfist###" << std::endl;
	std::cout << "Fullname: " << fullname << std::endl;
	std::cout << "Handicap: " << handicap << std::endl;
}