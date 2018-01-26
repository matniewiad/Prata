#include <iostream>
#include "Golf.h"

int main()
{
	std::cout << "Zadane 3\n";
	Golf person1;
	person1.show_golf();
	person1.set_handicap(33);
	person1.show_golf();
	person1.set_golf();
	person1.show_golf();

	std::cout << "Gotowe!\n";
	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}