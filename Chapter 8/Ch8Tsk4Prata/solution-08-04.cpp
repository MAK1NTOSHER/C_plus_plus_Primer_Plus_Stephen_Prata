#include <iostream>
using namespace std;
#include <cstring>
#pragma warning(disable : 4996)

struct stringy
{
	char* str;
	int ct;
};

void set(stringy& a, const char* str);
void show(const stringy& a, int b = 1);
void show(const char* str, int b = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	// ������ ���������� �������� ������,
	// �������� ������������ ��� �������� ����� testing
	// ���������� �������� ���� str ��������� beany ��� ���������
	// �� ����� ���� �
	// ������� ������� ��������� beany
	show(beany); // ������� ��������� ���� ��������� ���� ���
	show(beany, 2); // ������� ��������� ���� ��������� ��� ����
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing); // ������� ������ testing ���� ���
	show(testing, 3); // ������� ������ testing ��� ����
	show("Done!");
	return 0;
}

void set(stringy& a, const char* str)
{
	a.ct = strlen(str);
	a.str = new char[a.ct + 1];
	std::strcpy(a.str, str); // ����� ������������ strcpy() ����� ��������� �������������� C4996
	/*strcpy_s(a.str, a.ct + 1, str);*/	// ��� ���� ����� �������� ������ � �������� strcpy()
										// ����� ������������ ������� strcpy_s()
}

void show(const stringy& a, int b)
{
	for (int i = 0; i < b; i++)
		std::cout << a.str << std::endl;
	std::cout << std::endl;
}

void show(const char* str, int b)
{
	for (int i = 0; i < b; i++)
		std::cout << str << std::endl;
	std::cout << std::endl;
}