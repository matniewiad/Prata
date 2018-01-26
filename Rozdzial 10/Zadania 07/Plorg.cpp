#include <iostream>
#include <string>
#include "Plorg.h"

Plorg::Plorg(std::string nm, double ci)
{
	name = nm;
	if(name.size() > MAX)
		name.resize(MAX);
	sytosc = ci;
}

Plorg::~Plorg()
{

}

void Plorg::set_ci(int ci)
{
	sytosc = ci;
}

void Plorg::show_plorg() const
{
	std::cout << "Nazywam sie " << name << " i jestem Plorgiem betelgeskim.\n";
	std::cout << "Moj wspolczynnik sytosci wynosi " << sytosc << ".\n";
}