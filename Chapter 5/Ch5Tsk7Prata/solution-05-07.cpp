#include <iostream>

const int ArSize = 30;

struct Car
{
	char producer[ArSize]; // произврдитель
	int year; // год выпуска
};

int main()
{
	int number_of_cars = 0;
	std::cout << "How many cars input the catalogist? ";
	std::cin >> number_of_cars;
	std::cin.get(); // считываем символ новой строки оставшийся после cin
	Car* avto = new Car[number_of_cars];
	for (int i = 0; i < number_of_cars; i++)
	{
		std::cout << "Car #" << i + 1 << ": " << std::endl;
		std::cout << "Enter the producer: ";
		std::cin.getline((avto + i)->producer, ArSize); // считываем строку в стиле C, обращение к массиву структур через указатель
		std::cout << "Specify the year of release: ";
		std::cin >> (*(avto + i)).year;
		std::cin.get(); // считываем символ новой строки оставшийся после cin
	}
	std::cout << "Here is yor collection: " << std::endl;
	for (int i = 0; i < number_of_cars; i++)
	{
		std::cout << (avto + i)->year << " " << (avto + i)->producer << std::endl; // обращение к массиву структур через разыменование
	}
	delete[] avto; // освобождение выделенной памяти
	return 0;
}