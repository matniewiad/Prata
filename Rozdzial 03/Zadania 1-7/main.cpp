#include <iostream>

int main()
{
	//Zadanie 1
	{
		std::cout << "Zadanie 1\n";
		std::cout << "Podaj wzrost w centymetrach: ";
		int wzrost;
		std::cin >> wzrost;
		const double cm_to_foot = 30.48;
		const double cm_to_inch = 2.54;
		std::cout << wzrost << " cm to " << wzrost / cm_to_foot << " stop albo " << wzrost / cm_to_inch << " cali\n";
	}

	//Zadanie 2
	{
		std::cout << "\nZadanie 2\n";
		int w_stopy, w_cale;
		double wzrost, waga;
		std::cout << "Podaj wage (funty): ";
		std::cin >> waga;
		std::cout << "Podaj wzrost (2 liczby, stopy i cale): ";
		std::cin >> w_stopy >> w_cale;
		wzrost = (w_cale + w_stopy * 12) * 0.0254;
		const double pounds_to_kg = 2.2;
		waga = waga / pounds_to_kg;
		double BMI = waga / (wzrost*wzrost);
		std::cout << "Twoje BMI wynosi " << BMI << std::endl;
	}

	//Zadanie 3
	{
		std::cout << "\nZadanie 3\n";
		std::cout << "Podaj dlugosc w stopniach, minutach i sekundach:\n";
		int stopnie, minuty, sekundy;
		std::cout << "Najpierw podaj stopnie: ";
		std::cin >> stopnie;
		std::cout << "Nastepnie podaj minuty stopnia luku: ";
		std::cin >> minuty;
		std::cout << "Na koniec podaj sekundy luku: ";
		std::cin >> sekundy;
		const double sec_to_deg = 1 / 3600.0, min_to_deg = 1 / 60.0;
		std::cout << stopnie << " stopni, " << minuty << " minut, " << sekundy << " sekund = " << stopnie + minuty*min_to_deg + sekundy*sec_to_deg << " stopni\n";
	}

	//Zadanie 4
	{
		std::cout << "\nZadanie 4\n";
		std::cout << "Podaj liczbe sekund: ";
		long long sekund;
		std::cin >> sekund;
		const int sec_per_day = 86400, sec_per_hour = 3600, sec_per_min = 60;
		std::cout << sekund << " sekund = " << sekund / sec_per_day << " dni, " << (sekund%sec_per_day) / sec_per_hour << " godzin, " << (sekund%sec_per_day%sec_per_hour) / sec_per_min << " minut, " << sekund%sec_per_day%sec_per_hour%sec_per_min << " sekund\n";
	}

	//Zadanie 5
	{
		std::cout << "\nZadanie 5\n";
		std::cout << "Podaj liczbe ludnosci swiata: ";
		long long swiat;
		std::cin >> swiat;
		std::cout << "Podaj liczbe ludnosci Polski: ";
		long long polska;
		std::cin >> polska;
		std::cout << "Populacja Polski stanowi " << double(polska)/double(swiat)*100 << "% populacji swiata.\n";
	}

	//Zadanie 6
	{
		std::cout << "\nZadanie 6\n";
		double przejechano, spalono;
		std::cout << "Ile kilometrow przejechano: ";
		std::cin >> przejechano;
		std::cout << "Ile litrow benzyny spalono: ";
		std::cin >> spalono;
		std::cout << "Srednie zuzycie paliwa wynosi " << spalono/przejechano * 100 << " l/100km\n";
	}

	//Zadanie 7
	{
		std::cout << "\nZadanie 7\n";
		std::cout << "Podaj spalanie w l/100km: ";
		double spalanie;
		std::cin >> spalanie;
		const double l_to_gal = 3.875;
		const double licznik = 62.14;
		double mianownik;
		mianownik = spalanie / l_to_gal;
		std::cout << spalanie << " l/100km to " << licznik/mianownik << " mpg\n";
	}
	std::cin.ignore();
	getchar();
	return 0;
}