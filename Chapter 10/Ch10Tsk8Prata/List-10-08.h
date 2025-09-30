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

	// push() возвращает false, если стек полон, и true - в противном случае
	bool push(const Item& item); // добавляет элементы в стек

	void visit(void (*pf)(Item& item));
	//// pop() возвращает true, если стек пуст, и true - в противном случае
	bool pop(Item& item); // выталкивает элементы с вершины стека
	
	void showList() const;
};

#endif // !LIST_H_

