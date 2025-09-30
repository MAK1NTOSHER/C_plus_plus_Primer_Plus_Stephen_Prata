#pragma once
#ifndef LIST_H_
#define LUST_H_

typedef int Item;

void tripple(Item& item);

class List
{
private:
	enum { MAX = 10 };
	Item items[MAX];
	int top;
public:
	List();
	bool isempty() const;
	bool isfull() const;

	// push() ���������� false, ���� ���� �����, � true - � ��������� ������
	bool push(const Item& item); // ��������� �������� � ����

	void visit(void (*pf)(Item& item));
	//// pop() ���������� true, ���� ���� ����, � true - � ��������� ������
	bool pop(Item& item); // ����������� �������� � ������� �����
	
	void showList() const;
};

#endif // !LIST_H_

