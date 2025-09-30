#include "List.h"
#include <iostream>

List::List()
{
	top = 0;
}

bool List::isempty() const
{
	return top == 0;
}

bool List::isfull() const
{
	return top == MAX;
}

// push() возвращает false, если стек полон, и true - в противном случае
bool List::push(const Item& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

void List::visit(void (*pf)(Item & item))
{
	for (int i = 0; i < top; i++)
		pf(items[i]);
}

// pop() возвращает true, если стек пуст, и true - в противном случае
bool List::pop(Item& item)
{
	if (top > 0)
	{
		item = items[--top];
	}
	else
		return true;
}

void List::showList() const
{
	for (int i = 0; i < top; i++)
	{
		std::cout << "#" << i + 1 << ": " << items[i] << std::endl;
	}
}

void tripple(Item& item)
{
	item *= 3;
}