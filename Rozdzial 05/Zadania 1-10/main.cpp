//Rozdzia³ 5
#include<iostream>
#include <array>
#include <string>

//Zadanie 7
struct Car {
	std::string marka;
	int rok_budowy;
};

int main()
{
	//Zadanie 1
	{
		std::cout << "Zadanie 1\n";
		std::cout << "Podaj krance zakresu\npoczatek: ";
		int begin, end, suma=0;
		std::cin >> begin;
		std::cout << "koniec: ";
		std::cin >> end;
		for (int i = begin; i <= end; i++)
			suma += i;
		std::cout << "suma liczb od " << begin << " do " << end << " wynosi " << suma << std::endl;
	}
	//Zadanie 2
	{
		std::cout << "Zadanie 2\n";
		const int rozmiar = 101;
		std::array<long double, rozmiar> silnia;
		silnia[1] = silnia[0] = 1;
		for (int i = 2; i < rozmiar; i++)
			silnia[i] = i * silnia[i - 1];
		//for (int i = 0; i < rozmiar; i++)
		//	std::cout << i << "! = " << silnia[i] << std::endl;
		std::cout << "100! = " << silnia[100] << std::endl;
	}
	//Zadanie 3
	{
		std::cout << "Zadanie 3\n";
		std::cout << "Program prosi o podawanie liczb az do podania '0',\na nastepnie podaje sume wprowadzonych do tej pory liczb" << std::endl;
		int wybor, suma=0;
		do {
			std::cout << "Podaj liczbe: ";
			std::cin >> wybor;
			suma += wybor;
			std::cout << "Suma wprowadzonych liczb wynosi " << suma << std::endl;
		} while (wybor != 0);
	}
	//Zadanie 4
	{
		std::cout << "Zadanie 4\n";
		double pierwotnie_daffne = 100;
		double pierwotnie_cleo = 100;
		double zysk_daffne = 0;
		double zysk_cleo = 0;
		int i = 0;
		do {
			zysk_daffne += pierwotnie_daffne*0.1;
			zysk_cleo += (pierwotnie_cleo + zysk_cleo)*0.05;
			i++;
		} while (zysk_cleo < zysk_daffne);
		std::cout << "Po " << i << " latach Daffne = " << zysk_daffne << " \t" << zysk_cleo << " = Cloe" << std::endl;
	}
	//Zadanie 5
	{
		std::cout << "Zadanie 5\n";
		std::string miesiace[12]{"Styczen", "Luty", "Marzec","Kwiecien", "Maj", "Czerwiec", "Lipiec", "Sierpien", "Wrzesien", "Pazdziernik", "Listopad", "Grudzien"};
		int sprzedaz[12];
		int suma=0;
		std::cout << "Podaj dane dotyczace sprzedazy w kolejnych miesiacach\n";
		for (int i = 0; i < 12; i++)
		{
			std::cout << "Podaj liczbe sprzedanych egzemplarzy w " << miesiace[i] << ": ";
			std::cin >> sprzedaz[i];
			suma += sprzedaz[i];
		}
		std::cout << "Sprzedaz roczna wynosi: " << suma << " egzemplarzy.\n";
	}
	//Zadanie 6
	{
		std::cout << "Zadanie 6\n";
		std::string miesiace[12]{ "Styczen", "Luty", "Marzec","Kwiecien", "Maj", "Czerwiec", "Lipiec", "Sierpien", "Wrzesien", "Pazdziernik", "Listopad", "Grudzien" };
		int sprzedaz[3][12]{ 0 };
		int suma{ 0 };
		int suma_3{ 0 };
		for (int i = 0; i < 3; i++)
		{
			suma = 0;
			for (int j = 0; j < 12; j++)
			{
				std::cout << "Podaj liczbe sprzedanych egzemplarzy w " << miesiace[j] << " w " << i+1 << " roku: ";
				std::cin >> sprzedaz[i][j];
				suma += sprzedaz[i][j];
			}
			std::cout << "Sprzedaz roczna w roku " << i+1 << " wynosi: " << suma << " egzemplarzy.\n";
			suma_3 += suma;
		}
		std::cout << "Sprzedaz calkowita w 3 latach wynosi: " << suma_3 << " egzemplarzy.\n";
	}
	//Zadanie 7
	{
		std::cout << "Zadanie 7\n";
		std::cout << "Ile samochodow chcesz skatalogowac?: ";
		int ile;
		std::cin >> ile;
		Car *tab = new Car[ile];
		for (int i = 0; i < ile; i++)
		{
			std::cout << "Samochod #" << i + 1 << ":\n";
			std::cout << "Prosze podac marke: ";
			std::cin.ignore();
			getline(std::cin, tab[i].marka);
			std::cout << "Rok produkcji: ";
			std::cin >> tab[i].rok_budowy;
		}
		for (int i = 0; i < ile; i++)
			std::cout << tab[i].rok_budowy << " " << tab[i].marka << std::endl;
		delete[]tab;
	}
	//Zadanie 8
	{
		std::cout << "Zadanie 8\n";
		std::cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")\n";
		int licznik_slow = 0;
		char slowo[20];
		do {
			std::cin >> slowo;
			licznik_slow++;
		} while ((strcmp(slowo, "gotowe")));
		std::cout << "Wpisano " << licznik_slow - 1 << " slow\n";
	}
	//Zadanie 9
	{
		std::cout << "Zadanie 9\n";
		std::cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")\n";
		int licznik_slow{ 0 };
		std::string slowo;
		do {
			std::cin >> slowo;
			licznik_slow++;
		} while (slowo != "gotowe");
		std::cout << "Wpisano " << licznik_slow - 1 << " slow\n";
	}
	//zadanie 10
	{
		std::cout << "Zadanie 10\n";
		std::cout << "Podaj liczbe wierszy: ";
		int wierszy = 0;
		std::cin >> wierszy;
		for (int i = 1; i <= wierszy; i++)
		{
			for (int j = wierszy; j > i; j--)
				std::cout << ".";
			for (int j = 1; j <= i; j++)
				std::cout << "*";
			std::cout << std::endl;
		}
	}

	std::cin.ignore();
	getchar();
	return 0;
}