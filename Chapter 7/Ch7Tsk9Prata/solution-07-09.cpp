#include <iostream> 

const int SLEN = 30;

struct student 
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

// getinfo() ��������� ��� ���������: ��������� �� ������ ������� 
// ������� �������� student � �������� int, �������������� 
// ���������� ��������� � �������. ������� ����������� � 
// ��������� ������ � ���������. ���� ������������ ���� ����� 
// ���������� �������, ���� ��� ����� ������ ������ � �������� 
// ����� ��������. ������� ���������� �������������� ���������� 
//��������� ���������. 
int getinf�(student pa[], int n);

// display1 () ��������� � �������� ��������� ��������� student 
// � ���������� �� ����������. 
void display1(student st);

// display2() ��������� ����� ��������� student � �������� ��������� 
// � ���������� �� ����������, 
void display2(const student* ps);

// display3() ��������� ��������� �� ������ �������� ������� 
// �������� student � ���������� ��������� � ���� ������� � 
// ���������� ���������� ���� �������� � �������, 
void display3(const student pa[], int n);

int main()
{
	std::cout << "Enter class size: ";
	int class_size;
	std::cin >> class_size;
	while (std::cin.get() != '\n')
		continue;
	student* ptr_stu = new student[class_size];
	int entered = getinf�(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	std::cout << "Done\n";
	return 0;
}

int getinf�(student pa[], int n)
{
	std::cout << "\nENTER THE INFO ABOUT STUDENTS\n";
	int i = 0;
	for (i; i < n; i++)
	{
		std::cout << "\nEnter fullname: ";
		std::cin.getline(pa[i].fullname, SLEN);
		if (pa[i].fullname[0] == '\0') // ��������� ������ �� ������
			break;
		std::cout << "Enter hobby: ";
		std::cin.getline(pa[i].hobby, SLEN);
		std::cout << "Enter oop level: ";
		std::cin >> pa[i].ooplevel;
		std::cin.get();
	}
	return i;
}

void display1(student st)
{
	std::cout << "\nFULLNAME: " << st.fullname	<< '\n';
	std::cout << "HOBBY: "		<< st.hobby		<< '\n';
	std::cout << "OOP LEVEL: "	<< st.ooplevel	<< '\n';
}

void display2(const student* ps)
{
	std::cout << "\nFULLNAME: " << ps->fullname	<< '\n';
	std::cout << "HOBBY: "		<< ps->hobby	<< '\n';
	std::cout << "OOP LEVEL: "	<< ps->ooplevel << '\n';
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << "\nFULLNAME: " << pa[i].fullname	<< '\n';
		std::cout << "HOBBY: "		<< pa[i].hobby		<< '\n';
		std::cout << "OOP LEVEL: "	<< pa[i].ooplevel	<< '\n';
	}
}