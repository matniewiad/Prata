#include <iostream>

struct Pudlo {
	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float objetosc;
};

void show_Pudlo(const Pudlo obj);		//const niepotrzebne, bo i tak funkcja dziala na kopii (przekazywanie przez wartosc)
void change_V_of_Pudlo(Pudlo *obj);

int main()
{
	Pudlo moje_pudelko{ "ala", 10, 5, 2, 0 };
	show_Pudlo(moje_pudelko);
	change_V_of_Pudlo(&moje_pudelko);
	show_Pudlo(moje_pudelko);
	std::cin.ignore();
	getchar();
	return 0;
}

void show_Pudlo(const Pudlo obj)
{
	std::cout << "Parametry pudelka:\n";
	std::cout << "Producent: " << obj.producent << std::endl;
	std::cout << "Wysokosc: " << obj.wysokosc << std::endl;
	std::cout << "Szerokosc: " << obj.szerokosc << std::endl;
	std::cout << "Dlugosc: " << obj.dlugosc << std::endl;
	std::cout << "Objetosc: " << obj.objetosc << std::endl;
}

void change_V_of_Pudlo(Pudlo *obj)
{
	obj->objetosc = obj->dlugosc*obj->wysokosc*obj->szerokosc;
}