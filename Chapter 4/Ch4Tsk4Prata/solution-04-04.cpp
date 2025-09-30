#include <iostream>
#include <string>

using namespace std;

int main()
{
	string FirstName{};
	string LastName{};
	string FullName{};
	cout << "Enter your first name: ";
	getline(cin, FirstName);
	cout << "Enter your last name: ";
	getline(cin, LastName);
	FullName = LastName + ", " + FirstName;
	cout << "Here's the information in a single string: " << FullName;
	return 0;
}