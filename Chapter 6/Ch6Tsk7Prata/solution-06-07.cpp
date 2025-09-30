#include <iostream>
#include <cctype>

int main()
{
	char word[30];
	char letter;
	int vowels = 0; // гласные
	int consonants = 0; // согласные
	int others = 0;
	bool flag = false;
	std::cout << "Enter words (q to quit): " << std::endl;
	std::cin >> word;
	while (strcmp(word, "q"))
	{
		letter = word[0];
		flag = isalpha(letter);
		switch (flag)
		{
			case 0:
				others++;
				break;
			case 1:
				if ((letter == 'a') || (letter == 'A') || (letter == 'e') || (letter == 'E') || (letter == 'i') || (letter == 'I') || (letter == 'o') || (letter == 'O') || (letter == 'u') || (letter == 'U') || (letter == 'y') || (letter == 'Y'))
				{
					vowels++;
				}
				else
				{
					consonants++;
				}
				break;
			default:
				break;
		}
		std::cin.get();
		std::cin >> word;
	}
	std::cout << vowels << " words begging with vowels" << std::endl;
	std::cout << consonants << " words begging with consonants" << std::endl;
	std::cout << others << " others" << std::endl;
	return 0;
}