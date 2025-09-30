#include "List.h"
#include <iostream>

void setElement(Item& a);

int main()
{
	List lst; // сам список
	Item element; // элемент списка
	char ch; // символ для выбора действия
	std::cout << "\nPlease enter A to add element in list,\n"
		<< "D to delete element from list, T to transformation the elemtnts in list,\n"
		<< "S to show the list or Q to quit.\n";
	while (std::cin >> ch && toupper(ch) != 'Q')
	{
		while (std::cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			std::cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'a':
		case 'A':
			std::cout << "Enter a element to add\n";
			setElement(element);
			if (lst.isfull())
				std::cout << "List is already full\n";
			else
				lst.push(element);
			break;
		case 'd':
		case 'D':
			if (lst.isempty())
			{
				std::cout << "List is already empty\n";
			}
			else
			{
				lst.pop(element);
				std::cout << "Element: " << element << " poped\n";
			}
			break;
		case 't':
		case 'T':
			lst.visit(tripple);
			break;
		case 's':
		case 'S':
			lst.showList();
			break;
		}
		std::cout << "\nPlease enter A to add element in list,\n"
			<< "D to delete element from list, T to transformation the elemtnts in list,\n"
			<< "S to show the list or Q to quit.\n";
	}
	std::cout << "Bye\n";

	return 0;
}

void setElement(Item& a)
{
	std::cout << "Enter the new element: ";
	std::cin >> a;
	std::cin.get();
}