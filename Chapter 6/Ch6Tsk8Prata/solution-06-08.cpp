#include <iostream>
#include <fstream>

int main()
{
	char ch;
	int cnt = 0;
	std::ifstream inFile;
	inFile.open("file.txt");
	if (!inFile.is_open())
	{
		std::cout << "Couldn't open the file!";
		exit(EXIT_FAILURE);
	}
	inFile >> ch;
	cnt++;
	while (inFile.good())
	{
		inFile >> ch;
		cnt++;
	}
	if (inFile.eof())
	{
		std::cout << "End of file reached." << std::endl;
	}
	else if (inFile.fail())
	{
		std::cout << "Read data mismatch." << std::endl;
	}
	std::cout << "Number of chars: " << cnt;
	inFile.close();
	return 0;
}