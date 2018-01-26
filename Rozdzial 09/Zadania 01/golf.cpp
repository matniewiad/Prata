#include<iostream>
#include <cstring>
#include "golf.h"

void setgolf(Golf& g, const char* name, int hc)
{
	strncpy_s(g.fullname, name, Len);
	g.handicap = hc;
}

int setgolf(Golf& g)
{
	char name[Len];
	char hc_string[Len];
	int hc;
	std::cout << "Podaj nazwisko: ";
	std::cin.get(name, Len);
	if (name[0] == '\0')					//jesli nazwisko puste
		std::cin.clear();					//to clear bufora wejsciowego
	else									//nazwisko wprowadzone 
		while (std::cin.get() != '\n');		//jesli zbyt dlugie, to usuwanie nadmiaru

	std::cout << "Podaj handicap: ";
	std::cin >> hc;
	std::cin.ignore();			//smieci z wczytywania nazwiska. Ignoruje pierwszy(ostatni) znak w buforze wejsciowym (w tym przypadku zawsze '\n')
	while(!(std::cin.good()))
	{
		std::cin.clear();
		while (std::cin.get() != '\n');
		std::cout << "Wprowadz liczbe!: ";
		std::cin >> hc;
		std::cin.ignore(INT_MAX, '\n');
	}

	//setgolf(g, name, hc);		//<- mozna tak, zamiast 2 kolejnych
	strncpy_s(g.fullname, name, Len);
	g.handicap = hc;

	return (name[0] == '\0') ? 0 : 1;
}

void handicap(Golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const Golf& g)
{
	std::cout << "Nazwisko gracza: " << g.fullname << std::endl;
	std::cout << "Handicap gracza: " << g.handicap << std::endl << std::endl;
}