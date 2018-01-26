#include <iostream>
#include "Stack.h"
#include <string>

int main()
{
	std::cout << "Zadanie 5\n";
	Stack my_stack;
	my_stack.push({ "jan kowalski", 53.60 });
	my_stack.push({ "jan kowalski2", 7.60 });
	my_stack.push({ "jan kowalski3", 9.60 });
	my_stack.push({ "jan kowalski4", 11.60 });
	Customer cus1;
	my_stack.pop(cus1);
	my_stack.pop(cus1);
	my_stack.pop(cus1);
	my_stack.pop(cus1);
	my_stack.pop(cus1);
	my_stack.pop(cus1);
	my_stack.pop(cus1);
	std::cout << "INFO:\n" << cus1.fullname << " : " << cus1.payment << std::endl;

	std::cout << "Gotowe!\n";
	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}