#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;

int main()
{
	char FirstName[20]{};
	char LastName[20]{};
	char FullName[40]{};
	cout << "Enter your first name: ";
	cin.getline(FirstName, 20);
	cout << "Enter your last name: ";
	cin.getline(LastName, 20);
	strcat(FullName, LastName);
	strcat(FullName, ", ");
	strcat(FullName, FirstName);
	cout << "Here's the information in a single string: " << FullName;
	return 0;
}