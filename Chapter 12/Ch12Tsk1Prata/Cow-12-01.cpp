#include <iostream>
#include <cstring>
#include "Cow.h"

int Cow::cnt = 0;

// конструктор по умолчанию
Cow::Cow()
{
	name[0] = '\0';
	hobby = new char[1];
	hobby[0] = '\0';
	weight = 0;
	cnt++;
	std::cout << "CNT: " << cnt << std::endl;
}

// конструктор с параметрами
Cow::Cow(const char* nm, const char* ho, double wt)
{
	std::strcpy(name, nm);
	hobby = new char[std::strlen(ho) + 1];
	std::strcpy(hobby, ho);
	weight = wt;
	cnt++;
	std::cout << "CNT: " << cnt << std::endl;
}

// конструктор копирования
Cow::Cow(const Cow& c)
{
	std::strcpy(name, c.name);
	hobby = new char[std::strlen(c.hobby) + 1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
	cnt++;
	std::cout << "CNT: " << cnt << std::endl;
}

// деструктор
Cow::~Cow()
{
	--cnt;
	std::cout << "CNT: " << cnt << std::endl;
	delete[] hobby;
}

// операция присваивания
Cow& Cow::operator=(const Cow& c)
{
	if (this == &c)
		return *this;
	delete[] hobby;
	std::strcpy(name, c.name);
	hobby = new char[std::strlen(c.hobby) + 1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Hobby: " << hobby << std::endl;
	std::cout << "Weight: " << weight << std::endl;
}