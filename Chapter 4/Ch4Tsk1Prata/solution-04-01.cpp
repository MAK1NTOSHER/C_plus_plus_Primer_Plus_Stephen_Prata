#include <iostream> 

using namespace std;

int main()
{
	char FirstName[20]{};
	char LastName[20]{};
	char Grade;
	int Age = 0;
	cout << "What is your first name? ";
	cin.getline(FirstName, 20);
	cout << "What is your last name? ";
	cin.getline(LastName, 20);
	cout << "What letter grade do you deserve? ";
	cin >> Grade;
	Grade += 1; // 1-й способ 
				// прибавляем к коду символа единицу помучаем следующий символ из таблицы ASCII
	cout << "What is your age? ";
	cin >> Age;
	cout << "Name: " << LastName << ", " << FirstName << endl;
	cout << "Grade: " << Grade << endl; // 2-й способ
										// char(Grade + 1)
	cout << "Age: " << Age;
	return 0;
}