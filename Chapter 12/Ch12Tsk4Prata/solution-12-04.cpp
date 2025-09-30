#include <iostream>
#include <cctype>
#include "stack.h"

int main()
{
	using namespace std;
	Item elem;
	Stack st1(7);
	Stack st2;
	st2.push(1);
	st2.push(2);
	st2.push(3);
	st2.push(5);
	st2.push(8);
	int x = 1;
	while (!st1.isfull())
		st1.push(x++);
	cout << "###FIRST STACK###" << st1 << '\n';
	st1.pop(elem);
	cout << "###FIRST STACK AFTER POP###" << st1 << '\n';
	cout << "###SECOND STACK BEFORE ASSIGNMENT###" << st2 << '\n';
	Stack st3(st2);
	cout << "###THIRD AFTER COPYING###" << st3 << '\n';
	st2 = st1;
	cout << "###SECOND STACK AFTER ASSIGNMENT###" << st2 << '\n';
	return 0;
}