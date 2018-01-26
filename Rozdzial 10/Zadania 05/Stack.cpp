#include <iostream>
#include "Stack.h"

Stack::Stack()
{
	this->top = 0;
}

Stack::~Stack()
{

}

void Stack::push(const Item& it)
{
	if (this->top >= MAX)
		std::cout << "Stos pelny, przerywam.\n";
	else
	{
		tab[this->top] = it;
		(this->top)++;
	}
}

void Stack::pop(Item& it)
{
	if (top <= 0)
		std::cout << "Stos pusty, przerywam.\n";
	else
	{
		top--;
		it = tab[top];
	}
}
