#include <iostream>
#include "list.h"

void podwoj(int& a);
void polowa(int& a);
void add_5(int& a);

int main()
{
	std::cout << "Zadanie8\n";
	List lista;
	lista.show_list();
	lista.add_item(5);
	lista.add_item(8);
	lista.add_item(3);
	lista.add_item(2);
	lista.add_item(82);
	lista.add_item(29);
	lista.add_item(23);
	lista.add_item(132);
	lista.add_item(22);
	lista.add_item(232);
	lista.add_item(274);
	lista.add_item(25);
	lista.add_item(24);
	std::cout << "Czy lista jest pusta?: ";
	if (lista.is_empty())
		std::cout << "TAK\n";
	else
		std::cout << "NIE\n";

	std::cout << "Czy lista jest pelna?: ";
	if (lista.is_full())
		std::cout << "TAK\n";
	else
		std::cout << "NIE\n";

	std::cout << "Rozmiar listy to: " << lista.size() << std::endl;
	lista.show_list();
	lista.visit(add_5);
	lista.show_list();
	lista.visit(podwoj);
	lista.show_list();

	int b = 18;
	std::cout << "b przed popem: " << b << std::endl;
	lista.pop(b);
	std::cout << "b po popie: " << b << std::endl;
	lista.reset();
	lista.pop(b);
	std::cout << "b po resecie i popie: " << b << std::endl;

	std::cout << "Gotowe!\n";
	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}

void podwoj(int& a)
{
	a *= 2;
}

void polowa(int& a)
{
	a /= 2;
}

void add_5(int& a)
{
	a += 5;
}