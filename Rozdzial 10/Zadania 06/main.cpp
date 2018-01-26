#include <iostream>
#include "Move.h"

int main()
{
	std::cout << "Zadanie6\n";
	Move m1;
	Move m2(3.33);
	Move m3(4.5, 9.9);
	m1.show_move();
	m2.show_move();
	m3.show_move();
	m1 = m2.add(m3);
	m1.show_move();
	m2.show_move();
	m3.show_move();
	m2.reset();
	m2.show_move();
	m1.reset();
	m1.show_move();

	std::cout << "Gotowe!\n";
	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}