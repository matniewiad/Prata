#include <iostream>
#include "list.h"

List::List()
{
	index = 0;
}

List::~List()
{

}

bool List::is_empty() const
{
	return index == 0;
}

bool List::is_full() const
{
	return index == MAX;
}

void List::add_item(const Item& it)
{
	if (!is_full())
	{
		tab[index] = it;
		index++;
	}
	else if (is_full())
		std::cout << "Lista pelna, przerywam.\n";
}

int List::size() const
{
	return index;
}

void List::visit(void(*pf)(Item &))
{
	for (int i = 0; i < index; i++)
		(*pf)(tab[i]);
}

void List::show_list() const
{
	if (!is_empty())
	{
		std::cout << "Zawartosc listy:\n";
		for (int i = 0; i < index; i++)
			std::cout << tab[i] << "   ";
		std::cout << std::endl << std::endl;
	}
	else
		std::cout << "Lista pusta\n";
}

void List::reset()
{
	index = 0;
}

void List::pop(Item& it)
{
	if (!is_empty())
	{
		index--;
		it = tab[index];
	}
	else
		std::cout << "Lista pusta, przerywam.\n";
}