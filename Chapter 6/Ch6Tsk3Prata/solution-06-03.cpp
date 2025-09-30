#include <iostream>

int main()
{
	char ch;
	std::cout << "Please enter one of the following choices: " << std::endl;
	std::cout << "a) carnivore\tp) pianist" << std::endl;
	std::cout << "t) tree\t\tg) game" << std::endl;
	std::cin >> ch;
	while (!(ch == 'p' || ch == 'c' || ch == 't' || ch == 'g'))
	{
		std::cout << "Please enter a c, p, t or g: ";
		std::cin >> ch;
	}
	switch (ch)
	{
		case 'c':
			std::cout << "A maple is a carnivore.";
			break;
		case 'p':
			std::cout << "A maple is a pianist.";
			break;
		case 't':
			std::cout << "A maple is a tree.";
			break;
		case 'g':
			std::cout << "A maple is a game.";
			break;
		default:
			break;
	}
	return 0;
}