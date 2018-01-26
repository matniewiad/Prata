#include <iostream>
#include "Rachunek_bankowy.h"

Rachunek_bankowy::Rachunek_bankowy(std::string name, std::string nrRachunku, double Saldo)
{
	const std::string NRB_0 = "00000000000000000000000000";
	nr_rachunku = nrRachunku;
	//walidacja nr_rachunku
	if (nrRachunku.size() != 26)
	{
		std::cout << "Niepoprawny numer rachunku bankowego. Ustawiam NRB na 0\n";
		nr_rachunku = NRB_0;
	}
	else		//poprawna dlugosc
		for (int i = 0; i < 26; i++)
			if (!isdigit(nrRachunku[i]))
			{
				std::cout << "Numer rachunku moze zawierac tylko cyfry. Ustawiam NRB na 0\n";
				nr_rachunku = NRB_0;
				break;
			}

	nazwisko = name;
	saldo = Saldo;
}

Rachunek_bankowy::~Rachunek_bankowy()
{

}

void Rachunek_bankowy::show()
{
	std::cout << "Dane klienta " << nazwisko << std::endl;
	std::cout << "nr rachunku: " << nr_rachunku << std::endl;
	std::cout << "saldo: " << saldo << std::endl << std::endl;
}

void Rachunek_bankowy::depozyt(double ile)
{
	if (ile < 0)
		std::cout << "Depozyt nie moze byc ujemny. Transakcji anulowana.\n";
	else
		this->saldo += ile;
}

void Rachunek_bankowy::wydatek(double ile)
{
	if (ile > saldo)
		std::cout << "Nie mozesz wydac wiecej, niz wynosi Twoje saldo.\nTransakcja anulowana.\n";
	else
		saldo -= ile;
}
