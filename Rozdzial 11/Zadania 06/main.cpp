#include <iostream>
#include "Stonewt.h"

int main()
{
	std::cout << "Zadanie6\n";
	Stonewt tab[6];
	tab[0] = Stonewt(5, 5.5);
	tab[1] = Stonewt(34, 4.4);
	tab[2] = Stonewt(3, 3.3);
	int stones;
	double pounds;
	for (int i = 3; i < 6; i++)
	{
		std::cout << "Obiekt" << i + 1 << "\nWprowadz liczbe kamieni: ";
		std::cin >> stones;
		std::cout << "Wprowadz liczbe funtow: ";
		std::cin >> pounds;
		tab[i] = Stonewt(stones, pounds);
	}
	//porownywanie
	Stonewt wzor(11, 0);				//wzor, 11 kamieni
	int more_equal_than_11 = 0;			//licznik elementow >= 11 kamieni
	int index_min = 0, index_max = 0;	//indeksy najlezejszegi i najciezszego obiektu
	Stonewt min = tab[0];				//obiekt najlzejszy
	Stonewt max = tab[0];				//obiekt najciezszy
	for (int i = 0; i < 6; i++)
	{
		if (tab[i] >= wzor)
			more_equal_than_11++;
		if (tab[i] > max)
		{
			max = tab[i];
			index_max = i;
		}
		if (tab[i] < min)
		{
			min = tab[i];
			index_min = i;
		}
	}
	std::cout << std::endl;
	std::cout << "Indeks obiektu najmniejszego: " << index_min << std::endl;
	std::cout << "Indeks obiektu najwiekszego: " << index_max << std::endl;
	std::cout << "Liczba elementow o wartosci wiekszej lub rownej 11 kamieniom: " << more_equal_than_11 << std::endl;


	std::cout << "Gotowe!\n";
	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}