#include <iostream>
#include <cctype>
#include "Stack.h"

void setStruct(customer&);

int main()
{
	double pop_payment = 0.0;
	Stack st;
	char ch;
	Item cust;
	// A - push, P - pop, Q - quit
	std::cout << "\nPlease enter A to add a customer,\n"
			  << "P to delete customer, or Q to quit.\n";
	while (std::cin >> ch && toupper(ch) != 'Q')
	{
		while (std::cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			std::cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'a':
		case 'A':
			std::cout << "Enter a customer to add\n";
			setStruct(cust);
			if (st.isfull())
				std::cout << "stack is already full\n";
			else
				st.push(cust);
			break;
		case 'p':
		case 'P':
			if (st.isempty())
			{
				std::cout << "Stack is already empty\n";
			}
			else
			{
				st.pop(cust);
				std::cout << "Customer: " << cust.fullname << " poped\n";
				pop_payment += cust.payment;
				std::cout << "Total: " << pop_payment << std::endl;
			}
			break;
		}
		std::cout << "\nPlease enter A to add a customer,\n"
				  << "P to delete customer, or Q to quit.\n";
	}
	std::cout << "Bye\n";
	return 0;
}

void setStruct(customer& a)
{
	std::cout << "Enter a fullname of customer: ";
	std::cin.get(a.fullname, 35);
	std::cout << "Enter the payment of customer: ";
	std::cin >> a.payment;
	std::cin.get();
}