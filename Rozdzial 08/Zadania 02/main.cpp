#include <iostream>

struct Batonik {
	char* marka;
	double waga;
	int kcal;
};

void show_Batonik(const Batonik& bat);
void set_Batonik(Batonik& bat, char* m = "Millenium Munch", double w = 2.85, int c = 350);

int main()
{
	Batonik bat1{ "moj batonik", 10.5, 100 };
	show_Batonik(bat1);
	set_Batonik(bat1);
	show_Batonik(bat1);
	set_Batonik(bat1, "Bat2", 2.0, 200);
	show_Batonik(bat1);
	set_Batonik(bat1, "bat3", 30.5);
	show_Batonik(bat1);

	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}

void show_Batonik(const Batonik& bat)
{
	std::cout << "Batonik marki " << bat.marka << std::endl;
	std::cout << "Waga: " << bat.waga << " kalorii: " << bat.kcal << std::endl << std::endl;
}

void set_Batonik(Batonik& bat, char* m, double w, int c)
{
	bat.marka = m;
	bat.waga = w;
	bat.kcal = c;
}

