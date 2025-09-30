#include <iostream>
#include <cctype>
#include <string>

void ToUpper(std::string & str);

void main()
{
	std::string str;
	std::cout << "Enter a string (q to quit): ";
	std::getline(std::cin, str);
	while (std::cin && str != "q")
	{
		ToUpper(str);
		std::cout << "Next string (q to quit): ";
		std::getline(std::cin, str);
	}
	std::cout << "Bye.";
}

void ToUpper(std::string& str)
{
	for (int i = 0; i < str.size(); i++)
		std::cout << (char)toupper(str[i]);
	std::cout << std::endl;
}