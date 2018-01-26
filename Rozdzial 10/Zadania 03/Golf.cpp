#include <iostream>
#include <string>
#include "Golf.h"

Golf::Golf(std::string name, int hc)
{
	fullname = name;
	handicap = hc;
}

Golf::~Golf()
{
	//std::cout << "DESTRUKCJA!\n";
}

void Golf::set_golf()
{
	std::string name, hc_s;
	int hc;
	std::cout << "Podaj nazwisko: ";
	std::getline(std::cin, name);
	std::cout << "Podaj handicap: ";
	std::getline(std::cin, hc_s);
	while (1)
	{
		try
		{
			hc = std::stoi(hc_s);
			break;
		}
		catch(...)
		{
			std::cout << "handicap musi byc liczba. Wprowadz ponownie: ";
			std::getline(std::cin, hc_s);
		}
	}
	*this = Golf(name, hc);
}

void Golf::set_handicap(int hc)
{
	handicap = hc;
}

void Golf::show_golf() const
{
	std::cout << "Nazwisko: " << fullname << std::endl;
	std::cout << "Handicap: " << handicap << std::endl << std::endl;
}