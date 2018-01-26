#include <iostream>

double* fill_array(double* begin, double* end);
void show_array(double* begin, double* end);
void revalue(double* begin, double* end, double r);

int main()
{
	double tablica[10];
	double* tab_end = fill_array(tablica, tablica+10);
	double r;
	if (tab_end > tablica)
	{
		show_array(tablica, tab_end);
		std::cout << "Podaj czynnik zmieniajacy: ";
		while (!(std::cin >> r))
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "Bledna dana. Podaj liczbe: ";
		}
		revalue(tablica, tab_end, r);
		show_array(tablica, tab_end);
	}

	std::cin.clear();
	while (std::cin.get() != '\n');
	std::cout << "Gotowe!\n";
	getchar();
	return 0;
}

double* fill_array(double* begin, double* end)
{
	double* pt;
	int i = 1;
	for (pt = begin; pt != end; pt++)
	{
		std::cout << "Podaj wartosc " << i << ": ";
		std::cin >> *pt;
		if (!std::cin)
		{
			std::cin.clear();
			while(std::cin.get() != '\n');
			std::cout << "Koniec wczytywania.\n";
			break;
		}
		i++;
	}

	return pt;
}

void show_array(double* begin, double* end)
{
	std::cout << "Zawartosc tablicy\n";
	double* pt;
	for (pt = begin; pt != end; pt++)
		std::cout << *pt << "  ";
	std::cout << std::endl;
}

void revalue(double* begin, double* end, double r)
{
	//double* pt;
	for (auto pt = begin; pt != end; pt++)
		*pt *= r;
}