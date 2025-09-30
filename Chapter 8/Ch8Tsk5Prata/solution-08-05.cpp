#include <iostream>

template <typename T>
T max5(T mas[]);

int main()
{
	int a[5] = { 2,4,6,0,1 };
	double b[5] = { 3.14, 1.2, -34.5, 3.777, 0 };
	std::cout << "Max element of INT massive: ";
	int x = max5(a);
	std::cout << x << std::endl;
	std::cout << "Max element of DOUBLE massive: ";
	double y = max5(b);
	std::cout << y << std::endl;
	return 0;
}

template <typename T>
T max5(T mas[])
{
	T max = mas[0];
	for (int i = 0; i < 5; i++)
		max < mas[i] ? max = mas[i] : NULL;
	return max;
}