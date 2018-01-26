#include <iostream>

//zadanie 3
void entliczek_pentliczek();
void czerwony_stoliczek();
//Zadanie 5
void Cel_to_Farhr();
//Zadanie 6
double LS_to_JA(double);
//Zadanie 7
void wyswietl_czas(int, int);

int main()
{
	//zadanie 1
	std::cout << "Zadanie 1\n";
	std::cout << "Autorem ksiazki \"Szko³a programowania - jezyk c++\" jest Stephen Prata\n";

	//zadanie 2
	std::cout << "Zadanie 2\n";
	double ile_mil;
	std::cout << "Podaj liczbe mil ";
	std::cin >> ile_mil;
	std::cout << ile_mil << " mil to " << ile_mil * 1852 << " metrow\n";

	//zadanie 3
	std::cout << "Zadanie 3\n";
	entliczek_pentliczek();
	entliczek_pentliczek();
	czerwony_stoliczek();
	czerwony_stoliczek();

	//Zadanie 4
	std::cout << "Zadanie 4\n";
	std::cout << "Podaj swoj wiek: ";
	int wiek;
	std::cin >> wiek;
	std::cout << "Twoj wiek w miesiacach wynosi " << wiek*12 << ".\n";

	//Zadanie 5
	std::cout << "Zadanie 5\n";
	Cel_to_Farhr();

	//Zadanie 6
	std::cout << "Zadanie 6\n";
	double lat_swietlnych;
	std::cout << "Podaj liczbe lat swietlnych: ";
	std::cin >> lat_swietlnych;
	std::cout << lat_swietlnych << " lat swietlnych = " << LS_to_JA(lat_swietlnych) << " jednostek astronomicznych.\n";

	//Zadanie 7  - uposledzona funkcja bez zadnej walidacji danych
	std::cout << "Zadanie 7\n";
	int godzin, minut;
	std::cout << "Podaj liczbe godzin: ";
	std::cin >> godzin;
	std::cout << "Podaj liczbe minut: ";
	std::cin >> minut;
	wyswietl_czas(godzin, minut);

	std::cin.ignore();
	getchar();
}

//zadanie 3
void entliczek_pentliczek()
{
	std::cout << "Entliczek pentliczek\n";
}
void czerwony_stoliczek()
{
	std::cout << "Czerwony stoliczek\n";
}

//Zadanie 5
void Cel_to_Farhr()
{
	std::cout << "Podaj temperature w stopniach Celsjusza: ";
	double temp;
	std::cin >> temp;
	std::cout << temp << " stopnie Celsjusza to " << temp*1.8 + 32.0 << " stopnie Farhrenheita\n";
}

//Zadanie 6
double LS_to_JA(double lat_swietlnych)
{
	return lat_swietlnych * 63240;
}

//Zadanie 7
void wyswietl_czas(int godzin, int minut)
{
	std::cout << "Czas: " << godzin << ":" << minut << std::endl;
}