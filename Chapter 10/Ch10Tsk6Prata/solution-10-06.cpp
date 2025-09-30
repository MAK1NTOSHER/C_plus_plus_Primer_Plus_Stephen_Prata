#include <iostream>
#include "Move.h"

int main()
{
	Move a;
	a.showmove();
	a.reset(3, 5);
	a.showmove();
	Move b(13, 37);
	b.showmove();
	b.add(a).showmove();
	b.showmove();
	a.reset();
	a.showmove();
	return 0;
}