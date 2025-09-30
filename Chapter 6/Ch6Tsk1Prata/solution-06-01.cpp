#include <iostream>
#include <cctype>


int main()
{
	char ch;
	while (std::cin.get(ch))
	{
		if (isdigit(ch))
			continue;
		else if (isalpha(ch))
			if (islower(ch))
			{
				std::cout << (char) toupper(ch);
			}
			else
			{
				std::cout << (char) tolower(ch);
			}
		else if (ch == '@')
		{
			break;
		}
		else
		{
			std::cout << (char)ch;
		}
	}

	return 0;
}