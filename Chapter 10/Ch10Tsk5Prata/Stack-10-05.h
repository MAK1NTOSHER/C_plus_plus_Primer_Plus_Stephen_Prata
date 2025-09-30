#pragma once
#ifndef STACK_H_
#define STACK_H_
struct customer
{
	char fullname[35];
	double payment;
};

typedef customer Item;

class Stack
{
private:
	enum { MAX = 10 };
	Item items[MAX];
	int top;
public:
	Stack();
	bool isempty() const;
	bool isfull() const;

	// push() возвращает false, если стек полон, и true - в противном случае
	bool push(const Item& item); // добавляет элементы в стек

	// pop() возвращает true, если стек пуст, и true - в противном случае
	bool pop(Item& item); // выталкивает элементы с вершины стека
};
#endif // !STACK_H_
