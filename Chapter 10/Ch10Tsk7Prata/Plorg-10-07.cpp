#include <iostream>
#include "Plorg.h"

Plorg::Plorg(const char* str, int ind)
{
	for (int i = 0; i < 19; i++)
		name[i] = *(str + i);
	name[19] = '\0';
	contentment_index = ind;
}

void Plorg::CI(int ci)
{
	contentment_index = ci;
}

void Plorg::showPlorg() const
{
	std::cout << "Plorg " << name << ", his CI " << contentment_index << std::endl;
}