#include <iostream>
#include "Plorg.h"

int main()
{
	Plorg a;
	Plorg b("Disaster", 120);
	a.showPlorg();
	b.showPlorg();
	a.CI(54);
	a.showPlorg();
	Plorg �("ABCDEFGHIJKLMNOPQRSTUW");
	�.showPlorg();
	return 0;
}