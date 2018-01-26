#pragma once
#include<string>

class Rachunek_bankowy
{
private:
	std::string nazwisko;
	std::string nr_rachunku;
	double saldo;
public:
	Rachunek_bankowy(std::string name="brak danych", std::string nrRachunku = "00000000000000000000000000", double Saldo = 0.0);
	~Rachunek_bankowy();
	void show();
	void depozyt(double ile);
	void wydatek(double ile);
};