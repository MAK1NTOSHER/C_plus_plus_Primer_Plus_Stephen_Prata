#include <iostream>

struct Patron
{
	char name[30];
	double donate;
};


int main()
{
	int cnt_Grand_Patrons = 0;
	int patrons = 0;
	std::cout << "Enter the number of patrons: ";
	std::cin >> patrons;
	std::cin.get();
	Patron* donators = new Patron[patrons];
	std::cout << "Enter the informations about patrons: " << std::endl;
	for (int i = 0; i < patrons; i++)
	{
		std::cout << "Patron #" << i << ":" << std::endl;
		std::cout << "Name: ";
		std::cin.getline((donators + i)->name, 30);
		std::cout << "Donation amount: " << "        $\b\b\b\b\b\b\b\b\b";
		std::cin >> (donators + i)->donate;
		std::cin.get();
	}
	std::cout << std::endl << "Grand Patrons:" << std::endl;
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
	return 0;
}