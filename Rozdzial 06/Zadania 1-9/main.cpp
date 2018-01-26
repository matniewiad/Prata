//Rozdzial 6
#include <iostream>
#include <cctype>
#include <string>
#include <fstream>

void clear_input();

//Zadanie 3
void showmenu();

//Zadanie 4
struct Zakon {
	std::string imie;
	std::string stanowisko;
	std::string pseudonim;
	int pref;
};

//Zadanie 6
struct Wplaty {
	std::string nazwisko;
	double kwota;
};

int main()
{
	//Zadanie 1
	{
		std::cout << "Zadanie 1\n";
		char znak;
		std::cout << "Podawaj kolejne znaki. '@' przerywa wczytywanie\n";
		std::cin >> znak;
		while (znak != '@')
		{
			if (isupper(znak))
				znak = tolower(znak);
			if (!isdigit(znak))
				std::cout << znak;
			std::cin >> znak;
		}
		std::cin.clear();
		while (std::cin.get() != '\n');
	}
	//Zadanie 2
	{
		std::cout << "Zadanie 2\n";
		const int ile = 10;
		double tab[ile];
		int i = 0;
		std::cout << "datek " << i + 1 << ": ";
		while (i < ile && std::cin >> tab[i])
		{ 
			i++;
			if(i < ile)
				std::cout << "datek " << i + 1 << ": ";
		}
		double total = 0.0, srednia = 0.0;
		for (int j = 0; j < i; j++)
			total += tab[j];
		if (i == 0)
			std::cout << "nie wczytano zadnych danych\n";
		else
		{
			srednia = total / i;
			std::cout << "srednia waga " << i << " ryb wynosi " << srednia << std::endl;
		}
		if (i != 0)
			for (int j = 0; j < i; j++)
				if (tab[j] > srednia)
					std::cout << "datek " << j + 1 << " jest wiekszy od sredniej\n";
		std::cin.clear();
		while (std::cin.get() != '\n');
	}
	//Zadanie 3
	{
		std::cout << "Zadanie 3\n";
		showmenu();
		char wybor{ '0' };
		std::cin >> wybor;
		while (wybor != 'q' && wybor != 'Q')
		{
			switch (wybor)
			{
				case 'r':
					std::cout << "Wybrano opcje 1 " << wybor << std::endl;
					break;
				case 'p':
					std::cout << "Wybrano opcje 2 " << wybor << std::endl;
					break;
				case 'd':
					std::cout << "Wybrano opcje 3 " << wybor << std::endl;
					break;
				case 'g':
					std::cout << "Wybrano opcje 4 " << wybor << std::endl;
					break;
				case 'q':
				case 'Q':
					break;
				default:	
					std::cout << "Nie ma takiej opcji\n";
			}
			showmenu();
			std::cin >> wybor;
		}
	}
	//Zadanie 4
	{
		std::cout << "Zadanie 4\n";
		std::cout << "Zakon Programistow Dobrej Woli\n"
			"a. lista wg imion\n"
			"b. lista wg stanowisk\n"
			"c. lista wg pseudonimow\n"
			"d. lista wg preferencji\n"
			"q. koniec\n";
		const int ile = 5;
		Zakon tab[ile]{ {"imieA", "stanowiskoA", "pseudA", 3},{ "imieB", "stanowiskoB", "pseudB", 2},{ "imieC", "stanowiskoC", "pseudC", 1},{ "imieD", "stanowiskoD", "pseudD",2},{ "imieE", "stanowiskoE", "pseudE", 3} };
		
		char wybor{ '0' };
		std::cout << "Wybierz jedna z opcji:\n";
		std::cin >> wybor;
		clear_input();
		while (wybor != 'q')
		{
			switch (wybor)
			{
			case 'a':
				for (int i = 0; i < ile; i++)
					std::cout << tab[i].imie << std::endl;
				break;
			case 'b':
				for (int i = 0; i < ile; i++)
					std::cout << tab[i].stanowisko << std::endl;
				break;
			case 'c':
				for (int i = 0; i < ile; i++)
					std::cout << tab[i].pseudonim << std::endl;
				break;
			case 'd':
				for (int i = 0; i < ile; i++)
					if (tab[i].pref == 1)
						std::cout << tab[i].imie << std::endl;
					else if(tab[i].pref == 2)
						std::cout << tab[i].stanowisko << std::endl;
					else
						std::cout << tab[i].pseudonim << std::endl;
				break;
			default:
				std::cout << "Nie ma takiej opcji\n";
				break;
			}
			std::cout << "Wybierz jedna z opcji:\n";
			std::cin >> wybor;
			clear_input();
		}
		std::cout << "Do zobaczenia!\n";
	}

	//Zadanie 5
	{
		std::cout << "Zadanie 5\n";
		std::cout << "Kalkulator podatku. Ujemny dochod badz podanie czegos innego niz liczba konczy dzialanie\n";
		std::cout << "Podaj swoje dochody:\n";
		int dochod = 0;
		double podatek = 0.0;
		while (std::cin >> dochod && dochod >= 0)
		{
			clear_input();
			if (dochod <= 5000);
			else if (dochod > 5000 && dochod <= 15000)
				podatek = (dochod - 5000)*0.1;
			else if (dochod > 15000 && dochod <= 35000)
				podatek = 1000 + (dochod - 15000)*0.15;
			else
				podatek = 4000 + (dochod - 35000) * 0.2;
			std::cout << "Podatek dla dochodu " << dochod << " wynosi " << podatek << std::endl;
			std::cout << "Podaj swoje dochody:\n";
		}
		clear_input();
		std::cout << "Do zobaczenia!\n";
	}

	//Zadanie 6
	{
		std::cout << "Zadanie 6\n";
		std::cout << "Podaj liczbe wplacajacych: ";
		int wplacajacych;
		const int wspaniali = 10000;
		std::cin >> wplacajacych;
		Wplaty *tab = new Wplaty[wplacajacych];
		for (int i = 0; i < wplacajacych; i++)
		{
			std::cout << "Podaj swoje nazwisko: ";
			std::cin >> tab[i].nazwisko;
			std::cout << "Podaj kwote, ktora chcesz wplacic: ";
			std::cin >> tab[i].kwota;
		}
		int ile_wspanialych = 0;
		std::cout << "Nasi wspaniali sponsorzy\n";
		for (int i = 0; i < wplacajacych; i++)
			if (tab[i].kwota > wspaniali)
			{
				ile_wspanialych++;
				std::cout << tab[i].nazwisko << "\t" << tab[i].kwota << std::endl;
			}
		if (ile_wspanialych == 0)
			std::cout << "brak\n";
		std::cout << "Nasi sponsorzy\n";
		for (int i = 0; i < wplacajacych; i++)
			if(tab[i].kwota <= wspaniali)
				std::cout << tab[i].nazwisko << "\t" << tab[i].kwota << std::endl;
		if (ile_wspanialych == wplacajacych)
			std::cout << "brak\n";
		delete[]tab;
	}

	//Zadanie 7
	{
		std::cout << "Zadanie 7\n";
		std::cout << "Podawaj slowa (pojedyncze 'q' konczy):\n";
		std::string slowo;
		int samogloska{ 0 }, spolgloska{ 0 }, inne{ 0 };
		std::cin >> slowo;
		while (slowo != "q")
		{
			if (isalpha(slowo[0]))
			{
				switch(slowo[0])
				{ 
					case 'a':
					case 'e':
					case 'i':
					case 'o':
					case 'u':
					case 'y':
						samogloska++;
						break;
					default:
						spolgloska++;
						break;
				}
			}
			else
				inne++;
			std::cin >> slowo;
		}
		clear_input();
		std::cout << spolgloska << " slow zaczyna sie od spolglosek.\n";
		std::cout << samogloska << " slow zaczyna sie od samoglosek.\n";
		std::cout << inne << " slow nie zalicza sie do zadnej z tych kategorii.\n";
	}

	//Zadanie 8
	{
		std::cout << "Zadanie 8\n";
		std::fstream plik;
		int licznik_znakow{ 0 };
		char znak;
		plik.open("dane.txt");
		if (!plik.is_open())
			std::cout << "nie udalo sie otworzyc pliku\n";

		while (!plik.eof())
		{
			plik.get(znak);
			licznik_znakow++;
		}
		plik.close();
		licznik_znakow -= 1;
		std::cout << "Plik ma " << licznik_znakow << " znakow\n";
	}

	//Zadanie 9
	{
		std::cout << "Zadanie 9\n";
		std::fstream plik;
		plik.open("dane2.txt");
		if (!plik.is_open())
		{
			std::cout << "nie udalo sie otworzyc pliku\n";
			exit(0);
		}
		int wplacajacych;
		std::string t1;
		std::getline(plik, t1);
		wplacajacych = atoi(t1.c_str());
		int inx = 0;
		const int wspaniali = 10000;
		int ile_wspanialych = 0;
		Wplaty *tab = new Wplaty[wplacajacych];
		std::string temp2;
		for (int i = 0; i < wplacajacych; i++)
		{
			std::getline(plik, tab[inx].nazwisko);
			std::getline(plik, temp2);
			tab[inx].kwota = atoi(temp2.c_str());
			inx++;
		}
		std::cout << "Nasi wspaniali sponsorzy\n";
		for (int i = 0; i < wplacajacych; i++)
			if (tab[i].kwota > wspaniali)
			{
				ile_wspanialych++;
				std::cout << tab[i].nazwisko << "\t" << tab[i].kwota << std::endl;
			}
		if (ile_wspanialych == 0)
			std::cout << "brak\n";
		std::cout << "Nasi sponsorzy\n";
		for (int i = 0; i < wplacajacych; i++)
			if (tab[i].kwota <= wspaniali)
				std::cout << tab[i].nazwisko << "\t" << tab[i].kwota << std::endl;
		if (ile_wspanialych == wplacajacych)
			std::cout << "brak\n";
		plik.close();
		delete[]tab;
	}

	std::cin.ignore();
	getchar();
	return 0;
}
void clear_input()
{
	std::cin.clear();
	while (std::cin.get() != '\n');
}

//Zadanie 3
void showmenu()
{
	std::cout << "Wybierz r, p, d, g albo q:\n"
		"r) cos na R		p)cos na P\n"
		"d) cos na D		g)cos na G\n"
		"q) Koniec\n";
}