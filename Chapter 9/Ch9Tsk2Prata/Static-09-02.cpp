#include <iostream>
#include <string>

void strcount(const std::string str);

int main()
{
	using namespace std;
	std::string str;
	char next;
	cout << "Enter a line: \n";
	getline(std::cin, str);
	while (!(str == ""))
	{
		strcount(str);
		cout << "Enter next line (empty line to quit):\n";
		getline(std::cin, str);
	}
	cout << "Bye\n";
	return 0;
}

void strcount(const std::string str)
{
	using namespace std;
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" contains ";
	for (char a : str)
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}