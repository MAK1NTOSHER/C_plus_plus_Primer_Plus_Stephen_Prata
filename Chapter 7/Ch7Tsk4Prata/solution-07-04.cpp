// lotto.��� � ����������� �������� 
#include <iostream> 

//const unsigned mega_numbers = 27;
//const unsigned field_numbers = 47;
// ����������: ��������� ���������� ������� ���������� double ������ long double 
long double probability(unsigned numbers, unsigned picks, unsigned mega);
//long double mega_probability(unsigned numbers, unsigned picks);

int main()
{
	using namespace std;
	unsigned total, choices, total_mega;
	// ���� ������ ���������� ������� � ���������� �������, ������� ����� ������� 
	cout << "Enter the total number of choices on the game card,\n"
		"the number of picks allowed and total of mega numbers:\n";
	while ((cin >> total >> choices >> total_mega) && choices <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total, choices, total_mega); // ���������� � ����� ������ 
		cout << " of winning. \n";
		cout << "Next two numbers (q to quit) : ";
		// ���� ��������� ���� ����� (q ��� ����������) 
	}
	cout << "bye\n";
	return 0;
}
// ��������� ������� ��������� ����������� ����������� 
// ���������� picks ����� �� numbers ��������� 
long double probability(unsigned numbers, unsigned picks, unsigned mega)
{
	long double result = 1.0; // ��������� ��������� ���������� 
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	result *= mega;
	return result;
}


