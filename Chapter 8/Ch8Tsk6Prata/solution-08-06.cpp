#include <iostream>
#include <string>

const int ArSize = 50;

template <typename T>
T maxn(T mas[], int n);

template <> char* maxn(char* maxn[], int n);

int main()
{
	int a[6] = { 2, 4, 6, 0, 1, -56 };
	double b[4] = { 3.14, 1.2,  3.777, -34.5 };
	char* c[5] = {};
	std::cout << "Fill the mas of strings: " << std::endl;
	for (int i = 0; i < 5; i++)
	{
		c[i] = new char[ArSize];
		std::cin.get(c[i], ArSize);
		std::cin.get();
	}
	std::cout << "Max element of INT massive: ";
	int x = maxn(a, 6);
	std::cout << x << std::endl;
	std::cout << "Max element of DOUBLE massive: ";
	double y = maxn(b, 4);
	std::cout << y << std::endl;
	std::cout << "Max string of STRING C massive: ";
	char* str = maxn(c, 5);
	std::cout << str << std::endl;
	return 0;
}

template <typename T>
T maxn(T mas[], int n)
{
	if (n < 1)
	{
		std::cout << "Massive is empty!" << std::endl;
		return 0;
	}
	T max = mas[0];
	for (int i = 0; i < n; i++)
		max > mas[i] ? NULL : max = mas[i];
	return max;
}

template <> char* maxn(char* maxn[], int n)
{
	int maxlen = strlen(maxn[0]);
	char* maxstr = maxn[0];
	for (int i = 0; i < n; i++)
		maxlen > strlen(maxn[i]) ? NULL : maxlen = strlen(maxn[i]), maxstr = maxn[i];
	return maxstr;
}