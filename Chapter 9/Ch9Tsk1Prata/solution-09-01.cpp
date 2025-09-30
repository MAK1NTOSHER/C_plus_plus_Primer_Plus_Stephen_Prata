#include <iostream>
#include "golf.h"

int main()
{
	golf a{};

	setgolf(a, "Krasti Krab", 77); // неитерактивная версия
	showgolf(a);

	handicap(a, 99); // изменение гандикапа
	std::cout << std::endl << "Changed handicap: ";
	showgolf(a);

	int n;
	std::cout << std::endl << "Enter the number of golfists: ";
	std::cin >> n;
	std::cin.get();
	golf* golfists = new golf[n];
	int i = 0;
	while (i < n && (setgolf(golfists[i]))) // интерактивная версия
		i++;
	for (int g = 0; g < i; g++)
		showgolf(golfists[g]);
	delete[] golfists;
	return 0;
}