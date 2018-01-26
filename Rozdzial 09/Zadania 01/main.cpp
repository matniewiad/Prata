#include <iostream>
#include "golf.h"

int main()
{
	std::cout << "Zadanie 1\n";
	Golf my_golf{ "Name", 10 };
	showgolf(my_golf);

	Golf ann;
	setgolf(ann, "Ann Birdfree", 24);
	showgolf(ann);

	int a = 0;
	Golf andy;

	int czy_wprowadzono = setgolf(andy);
	showgolf(andy);
	std::cout << "Czy nazwisko wprowadzone? (1-tak, 0-nie): " << czy_wprowadzono << std::endl << std::endl;

	Golf tab[3];
	for (int i = 0; i < 3; i++)
		setgolf(tab[i]);
	std::cout << "\nWprowadzone dane:\n";
	for (int i = 0; i < 3; i++)
		showgolf(tab[i]);

	std::cout << "Gotowe!\n";
	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}