#include <iostream>
#include "Stonewt.h"

int main()
{
	std::cout << "Zadanie5\n";
	Stonewt s1(5, 6.5, Stonewt::ST);
	std::cout << "st1: " << s1 << std::endl;
	s1.set_PDint();
	std::cout << "st1: " << s1 << std::endl;
	s1.set_PDdouble();
	std::cout << "st1: " << s1 << std::endl;
	s1.set_ST();
	Stonewt s2(3, 9.0);
	
	std::cout << std::endl << std::endl;
	std::cout << "st1: " << s1 << std::endl;
	std::cout << "st2: " << s2 << std::endl;
	std::cout << "st1+st2: " << s1+s2 << std::endl;
	std::cout << "st1-st2: " << s1-s2 << std::endl;
	std::cout << "st1*9.0: " << s1*9.0 << std::endl;
	std::cout << "st1*st2: " << s1*s2 << std::endl;


	std::cout << "Gotowe!\n";
	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}