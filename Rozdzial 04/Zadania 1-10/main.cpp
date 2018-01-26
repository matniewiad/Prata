//Rozdzia³ 4
#include <iostream>
#include <string>
#include <cstring>
#include <array>

//Zadanie 5
struct Batonik {
	std::string marka;
	double waga;
	int liczba_kalorii;
};

//Zadanie 7
struct Pizza {
	std::string marka;
	double srednica;
	double waga;
};

int main()
{
	//Zadanie 1
	{
		std::cout << "Zadanie 1\n";
		std::cout << "Jak masz na imie? ";
		std::string imie;
		getline(std::cin, imie);
		std::cout << "Jak sie nazywasz? ";
		std::string nazwisko;
		getline(std::cin, nazwisko);
		std::cout << "Na jaka ocene zaslugujesz? ";
		int ocena;
		std::cin >> ocena;
		std::cout << "Ile masz lat? ";
		int wiek;
		std::cin >> wiek;
		std::cout << "Nazwisko: " << nazwisko << ", " << imie << std::endl;
		std::cout << "Ocena: " << ocena - 1 << std::endl;
		std::cout << "Wiek: " << wiek << std::endl;
	}
	//Zadanie 2
	{
		std::cin.ignore();
		std::cout << "Zadanie 2\n";
		using namespace std;
		string name;
		string dessert;
		cout << "Podaj swoje imie:\n";
		getline(cin, name);
		cout << "Podaj swoj ulubiony deser:\n";
		getline(cin, dessert);
		cout << "Mam dla ciebie " << dessert;
		cout << ", " << name << ".\n";
	}
	//Zadanie 3
	{
		std::cin.ignore();
		std::cout << "Zadanie 3\n";
		char imie[20];
		char nazwisko[20];
		std::cout << "Podaj imie: ";
		std::cin.getline(imie, 20);
		std::cout << "Podaj nazwisko: ";
		std::cin.getline(nazwisko, 20);
		char trzeci[45];
		strcpy_s(trzeci, imie);
		strcat_s(trzeci, ", ");
		strcat_s(trzeci, nazwisko);
		std::cout << "Oto informacje zestawione w jeden napis: " << trzeci << std::endl;
	}
	//Zadanie 4
	{
		std::cin.ignore();
		std::cout << "Zadanie 4\n";
		std::string imie;
		std::string nazwisko;
		std::string trzeci{};
		std::cout << "Podaj imie: ";
		std::cin >> imie;
		std::cout << "Podaj nazwisko: ";
		std::cin >> nazwisko;
		trzeci += imie;
		trzeci += ", ";
		trzeci += nazwisko;
		std::cout << "Oto informacje zestawione w jeden napis: " << trzeci << std::endl;
	}
	//Zadanie 5
	{
		std::cin.ignore();
		std::cout << "Zadanie 5\n";
		Batonik snack{ "Mocha Munch", 2.3, 350 };
		std::cout << "Batonik " << snack.marka << " ma " << snack.liczba_kalorii << " kalorii i wazy " << snack.waga << std::endl;
	}
	//Zadanie 6
	{
		std::cin.ignore();
		std::cout << "Zadanie 6\n";
		Batonik s_tab[3]{ {"b1", 1.0, 1},{ "b2", 2.2, 2 },{ "b3", 3.3, 3 } };
		std::cout << "Batonik " << s_tab[0].marka << " ma " << s_tab[0].liczba_kalorii << " kalorii i wazy " << s_tab[0].waga << std::endl;
		std::cout << "Batonik " << s_tab[1].marka << " ma " << s_tab[1].liczba_kalorii << " kalorii i wazy " << s_tab[1].waga << std::endl;
		std::cout << "Batonik " << s_tab[2].marka << " ma " << s_tab[2].liczba_kalorii << " kalorii i wazy " << s_tab[2].waga << std::endl;
	}
	//Zadanie 7
	{
		std::cin.ignore();
		std::cout << "Zadanie 7\n";
		Pizza p1;
		std::cout << "Podaj nazwe firmy produkujacej pizze: ";
		getline(std::cin, p1.marka);
		std::cout << "Podaj srednice: ";
		std::cin >> p1.srednica;
		std::cout << "Podaj wage: ";
		std::cin >> p1.waga;
		std::cout << "Pizza firmy " << p1.marka << "  ma " << p1.srednica << " srednicy i wazy " << p1.waga << std::endl;
	}
	//Zadanie 8
	{
		std::cin.ignore();
		std::cout << "Zadanie 8\n";
		Pizza *p1 = new Pizza;
		std::cout << "Podaj srednice: ";
		std::cin >> p1 -> srednica;
		std::cin.ignore();
		std::cout << "Podaj nazwe firmy produkujacej pizze: ";
		getline(std::cin, p1 -> marka);
		std::cout << "Podaj wage: ";
		std::cin >> p1 -> waga;
		std::cout << "Pizza firmy " << p1->marka << "  ma " << p1->srednica << " srednicy i wazy " << p1->waga << std::endl;
		delete p1;
	}
	//Zadanie 9
	{
		std::cin.ignore();
		std::cout << "Zadanie 9\n";
		Batonik *tab = new Batonik[3];
		tab[0].marka = "b0";
		tab[0].liczba_kalorii = 0;
		tab[0].waga = 0.0;
		tab[1].marka = "b1";
		tab[1].liczba_kalorii = 1;
		tab[1].waga = 1.1;
		tab[2].marka = "b2";
		tab[2].liczba_kalorii = 2;
		tab[2].waga = 2.2;
		std::cout << "Batonik " << tab[0].marka << " ma " << tab[0].liczba_kalorii << " kalorii i wazy " << tab[0].waga << std::endl;
		std::cout << "Batonik " << tab[1].marka << " ma " << tab[1].liczba_kalorii << " kalorii i wazy " << tab[1].waga << std::endl;
		std::cout << "Batonik " << tab[2].marka << " ma " << tab[2].liczba_kalorii << " kalorii i wazy " << tab[2].waga << std::endl;
		delete[] tab;
	}
	//Zadanie 10
	{
		std::cin.ignore();
		std::cout << "Zadanie 10\n";
		std::array<double, 3> sprint;
		std::cout << "Podaj 3 czasy sprintu ma 100m:\n";
		std::cin >> sprint[0];
		std::cin >> sprint[1];
		std::cin >> sprint[2];
		std::cout << "Twoje czasy to " << sprint[0] << ", " << sprint[1] << ", " << sprint[2] << std::endl;
		std::cout << "Czas sredni wynosi: " << (sprint[0] + sprint[1] + sprint[2]) / 3 << std::endl;
	}
	std::cin.ignore();
	getchar();
	return 0;
}