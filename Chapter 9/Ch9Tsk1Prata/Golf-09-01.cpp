#include <iostream>
#include "golf.h"

void setgolf(golf& g, const char* name, int hc)
{
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf& g)
{
	std::cout << "Enter the name of golfist: ";
	std::cin.get(g.fullname, Len);
	if (!strcmp(g.fullname, ""))
		return 0;
	std::cout << "Enter his handicap: ";
	std::cin >> g.handicap;
	std::cin.get();
	return 1;
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf& g)
{
	std::cout << g.fullname << ", his result: " << g.handicap << std::endl;
}