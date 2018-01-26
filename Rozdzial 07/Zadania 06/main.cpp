#include <iostream>

int fill_array(double tab[], int size);					//funkcja wype³nia tablicê, umo¿liwia wczeœniejsze przerwanie, zwraca liczbê wype³nionych elementów
void show_array(const double tab[], int size);			//wyswietla wyniki w 1 wierszu, ochrona tablicy przed zmiana
void reverse_array(double tab[], int size);				//odwraca tablice

int main()
{
	double tablica[10];
	int wypelniono = fill_array(tablica, 10);
	show_array(tablica, wypelniono);
	reverse_array(tablica, wypelniono);
	show_array(tablica, wypelniono);
	std::cin.clear();
	while (std::cin.get() != '\n');
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

void reverse_array(double tab[], int size)
{
	double temp;
	for (int i = 0; i < size / 2; i++)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
	}
}