#include <iostream>
#include <fstream>

struct Patron
{
	char name[30];
	double donate;
};

int main()
{
	int cnt_Grand_Patrons = 0;
	int patrons = 0;
	std::fstream inFile;
	inFile.open("file.txt");
	if (!inFile.is_open())
	{
		std::cout << "Couldn't open the file!";
		exit(EXIT_FAILURE);
	}
	while (inFile.good())
	{
		inFile >> patrons;
		inFile.get();
		Patron* donators = new Patron[patrons];
		for (int i = 0; i < patrons; i++)
		{
			inFile.getline((donators + i)->name, 30);
			inFile >> (donators + i)->donate;
			inFile.get();
		}
		std::cout << "Grand Patrons:" << std::endl;
		for (int i = 0; i < patrons; i++)
		{
			if (((donators + i)->donate) >= 10000)
			{
				std::cout << (donators + i)->name << std::endl;
				cnt_Grand_Patrons++;
			}
		}
		if (cnt_Grand_Patrons == 0)
		{
			std::cout << "none" << std::endl;
		}
		std::cout << std::endl << "Patrons:" << std::endl;
		for (int i = 0; i < patrons; i++)
		{
			if (((donators + i)->donate) < 10000)
			{
				std::cout << (donators + i)->name << std::endl;
			}
		}
		delete[] donators;
	}
	if (inFile.eof())
	{
		std::cout << "End of file reached." << std::endl;
	}
	else if (inFile.fail())
	{
		std::cout << "Read data mismatch." << std::endl;
	}
	inFile.close();
	return 0;
}