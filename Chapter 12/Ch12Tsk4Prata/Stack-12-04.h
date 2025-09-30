#ifndef STACK_H_
#define STACK_H_
#include <iostream>

typedef unsigned long Item;

class Stack 
{
private:
	enum { MAX = 10 };		// константа, специфичная для класса
	Item * pitems;			// хранит элементы стека
	int size;				// количество элементов в стеке
	int top;				// индекс для верхнего элемента в стека
public:
	Stack(int n = 10);
	Stack(const Stack& st);
	~Stack();
	bool isempty() const;
	bool isfull() const;
	// push() возвращает false, если стек полон, и true - в противном случае
	bool push(const Item& item);
	// pop() возвращает false, если стек пуст, и true - в противном случае
	bool pop(Item& item);
	Stack& operator=(const Stack& st);
	friend std::ostream& operator<<(std::ostream& os, const Stack& st);
};

#endif
