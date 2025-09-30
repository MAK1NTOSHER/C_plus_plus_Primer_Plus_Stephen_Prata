#include "stack.h"

Stack::Stack(int n)
{
	if (n > MAX || n < 0)
	{
		std::cout << "The number of elements on the stack cannot be more than 10 or less than 0, the size is set to 10 elments.\n";
		n = MAX;
	}
	top = 0;
	size = n;
	pitems = new Item[size];
}

Stack::Stack(const Stack& st)
{
	size = st.size;
	top = st.top;
	pitems = new Item[st.size];
	for (int i = 0; i < st.top; i++)
		pitems[i] = st.pitems[i];
}

Stack::~Stack()
{
	delete[] pitems;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == size;
}

bool Stack::push(const Item& item)
{
	if (top < size)
	{
		pitems[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item& item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
		return false;
}

Stack& Stack::operator=(const Stack& st)
{
	if (this == &st)
		return *this;
	delete[] pitems;
	size = st.size;
	top = st.top;
	pitems = new Item[st.size];
	for (int i = 0; i < st.top; i++)
		pitems[i] = st.pitems[i];
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Stack& st)
{
	os << "\nSize: " << st.size << '\n';
	os << "Top: " << st.top << '\n';
	os << "Elements: ";
	for (int i = 0; i < st.top; i++)
		os << st.pitems[i] << " ";
	os << '\n';
	return os;
}
