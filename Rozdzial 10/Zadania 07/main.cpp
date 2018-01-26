#include <iostream>
#include "Plorg.h"

int main()
{
	std::cout << "Zadanie7\n";
	Plorg p1;
	p1.show_plorg();
	p1 = Plorg("abcdefghijklmnopqrstuvwxyz1234567890", 33);
	p1.show_plorg();
	p1.set_ci(555);
	p1.show_plorg();


	std::cout << "Gotowe!\n";
	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}