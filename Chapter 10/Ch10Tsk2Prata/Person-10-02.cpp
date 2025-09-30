#include <iostream>
#include <string>
#include "Person.h"

Person::Person(const std::string& ln, const char* fn)
{
	lname = ln;
	strcpy_s(fname, fn);
}

void Person::Show() const // формат: имя фамилия
{
	std::cout << fname << " " << lname << '\n' << std::endl;
}

void Person::FormalShow() const // формат: фамилия, имя
{
	std::cout << lname << ", " << fname << '\n' << std::endl;
}