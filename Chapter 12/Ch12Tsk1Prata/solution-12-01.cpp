#include <iostream>
#include "Cow.h"

int main()
{
	Cow c1;
	Cow c2("Bob", "Football", 88);
	Cow* c3 = new Cow("Peter", "Basketball", 67);
	std::cout << "c3:\n";
	c3->ShowCow();
	std::cout << "c1:\n";
	c1.ShowCow();
	std::cout << "c2:\n";
	c2.ShowCow();
	Cow c4(c2);
	c4.ShowCow();
	c1 = c2;
	c1.ShowCow();
	delete c3;
	return 0;
}