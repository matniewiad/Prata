#include <iostream>

int fill_array(double tab[], int size);					//funkcja wype³nia tablicê, umo¿liwia wczeœniejsze przerwanie, zwraca liczbê wype³nionych elementów
void show_array(const double tab[], int size);			//wyswietla wyniki w 1 wierszu, ochrona tablicy przed zmiana
double array_count_avg(const double tab[], int size);	//liczy srednia, chroni tablice przed zmiana

int main()
{
	std::cout << "Podaj 10 wyników golfowych:\n";
	double tab[10];
	int wypelniono = fill_array(tab, 10);
	std::cout << "Wypelniono " << wypelniono << " pol.\n";
	show_array(tab, wypelniono);
	std::cout << "Srednia wynosi " << array_count_avg(tab, wypelniono) << std::endl;
	std::cin.ignore();
	getchar();
	return 0;
}

int fill_array(double tab[], int size)
{
	double temp;
	int i;
	for (i = 0; i < size; i++)
	{
		std::cout << "Podaj wynik " << i + 1 << ": ";
		std::cin >> temp;
		if (!std::cin)	//b³êdne dane
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "Bledne dane, wprowadzanie przerwane.\n";
			break;
		}
		else if (temp < 0)		//oznaczenie koñca danych
			break;
		tab[i] = temp;
	}
	return i;
}

void show_array(const double tab[], int size)
{
	std::cout << "Zawartosc tablicy:\n";
	for (int i = 0; i < size; i++)
		std::cout << tab[i] << "  ";
	std::cout << std::endl;
}

double array_count_avg(const double tab[], int size)
{
	double avg = 0.0;
	for (int i = 0; i < size; i++)
		avg += tab[i];
	avg /= size;
	return avg;
}