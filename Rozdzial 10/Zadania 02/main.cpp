#include <iostream>
#include "Person.h"

int main()
{
	std::cout << "Zadanie 2\n";
	Person one;
	Person two("Staszek");
	Person three("Jacek", "Placek");
	one.show();
	one.formal_show();
	two.show();
	two.formal_show();
	three.show();
	three.formal_show();

	std::cout << "Gotowe!\n";
	std::cin.clear();
	while (std::cin.get() != '\n');
	return 0;
}