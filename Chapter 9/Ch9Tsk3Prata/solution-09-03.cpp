#include <iostream>

struct chaff
{
	char dross[20];
	int slag;
};

char buffer[50];

int main()
{
	chaff* garbage = new (buffer) chaff[2];
	strcpy_s(garbage->dross, "leftovers");
	garbage->slag = 15;
	strcpy_s((garbage + 1)->dross, "scrap metel");
	(garbage + 1)->slag = 150;

	for (int i = 0; i < 2; i++)
	{
		std::cout << "#" << i << std::endl;
		std::cout << (garbage + i)->dross << " at " << &(garbage+ i)->dross << std::endl;
		std::cout << (garbage + i)->slag << " at " << &(garbage + i)->slag << std::endl;
		std::cout << std::endl;
	}
}