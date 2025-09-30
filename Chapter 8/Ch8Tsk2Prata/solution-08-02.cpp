#include <iostream>

char NAME[] = "Millennium Munch";

struct CandyBar
{
	const char * name;
	double weight;
	int calories;
};

void fill(CandyBar& candy, const char * str = NAME, double wght = 2.85, int cal = 350);
void show(const CandyBar& candy);

int main()
{
	CandyBar sweet;
	fill(sweet); // заполнили по умолчанию
	show(sweet);
	fill(sweet, "Merci", 3.12, 300); // заполнили заданными значениями
	show(sweet);
	fill(sweet); // опять заполнили по умолчанию
	show(sweet);
	return 0;
}

void fill(CandyBar& candy, const char * str, double wght, int cal)
{
	candy.name = str;
	candy.weight = wght;
	candy.calories = cal;
}

void show(const CandyBar& candy)
{
	std::cout << "Name: " << candy.name << std::endl;
	std::cout << "Weight: " << candy.weight << std::endl;
	std::cout << "Calories: " << candy.calories << std::endl;
	std::cout << '\n';
}