#include <iostream>

//dane stale
const int Seasons = 4;
const char* Snames[Seasons] = { "Wiosna", "Lato", "Jesien", "Zima" };

void fill_array(double expenses[]);
void show_array(const double expenses[]);

struct Wydatki {
	double tablica[Seasons]{ 0 };
};

void fill_array_in_struct(Wydatki* obj);
void show_array_in_struct(Wydatki obj);

int main()
{
	std::cout << "a)\n";
	double expenses[Seasons];
	fill_array(expenses);
	show_array(expenses);

	std::cout << "b)\n";
	Wydatki wyd1;
	fill_array_in_struct(&wyd1);
	show_array_in_struct(wyd1);

	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}

void fill_array(double expenses[])
{
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
		std::cin >> expenses[i];
	}
}

void show_array(const double expenses[])
{
	double total = 0.0;
	std::cout << "\nWYDATKI\n";
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << Snames[i] << ": " << expenses[i] << " zl" << std::endl;
		total += expenses[i];
	}
	std::cout << "£acznie wydatki roczne: " << total << " zl " << std::endl;
}

void fill_array_in_struct(Wydatki* obj)
{
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
		std::cin >> obj->tablica[i];
	}
}

void show_array_in_struct(Wydatki obj)
{
	double total = 0.0;
	std::cout << "\nWYDATKI\n";
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << Snames[i] << ": " << obj.tablica[i] << " zl" << std::endl;
		total += obj.tablica[i];
	}
	std::cout << "£acznie wydatki roczne: " << total << " zl " << std::endl;
}