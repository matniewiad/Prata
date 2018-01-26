#include <iostream>
#include "Rachunek_bankowy.h"

int main()
{
	Rachunek_bankowy rachunek1("Jan Kowalski", "12345678912345678912345678", 1000.0);
	rachunek1.show();
	rachunek1.wydatek(500.0);
	rachunek1.show();
	rachunek1.depozyt(300.5);
	rachunek1.show();
	rachunek1.wydatek(50.0);
	rachunek1.show();

	std::cout << "Gotowe!\n";
	std::cin.clear();
	while (std::cin.get() != '\n');
	return 0;
}