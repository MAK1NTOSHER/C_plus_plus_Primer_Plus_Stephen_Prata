#include <iostream>

void func(char*, int n = 1);

int cnt = 0;

int main()
{
	char str[10] = "C++";
	func(str);
	func(str);
	func(str);
	func(str, cnt);
	func(str);
	func(str, cnt);
	return 0;
}

void func(char* str, int n)
{
	cnt++;
	for (int i = 0; i < n; i++)
	{
		std::cout << i + 1 << ": " << str << std::endl;
	}
	std::cout << std::endl;
}