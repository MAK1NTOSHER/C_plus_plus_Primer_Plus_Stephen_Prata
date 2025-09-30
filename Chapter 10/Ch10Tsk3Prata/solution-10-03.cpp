#include <iostream>
#include "Golf.h"

int main()
{
	Golf one;
	Golf two("Artem Zakharov", 134);
	one.showgolf();
	two.showgolf();
	one.setgolf();
	two.change_handicap(1);
	one.showgolf();
	two.showgolf();
	return 0;
}