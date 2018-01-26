#include <iostream>

long double probality(unsigned numbers, unsigned picks, unsigned mega_begin, unsigned mega_end);
int main()
{
	int numbers, picks, mega_begin, mega_end;
	std::cout << "Podawaj parametry, liczby ujemne koncza program.\n";
	std::cout << "Podaj najwieksza liczbe, jaka mozna wybrac, liczbe skreslen oraz poczatek i koniec zakresu dla mega liczby.\n";
	while ((std::cin >>numbers>>picks>>mega_begin>>mega_end))
	{
		if (numbers < 0 || picks < 0 || mega_begin < 0 || mega_end < 0)
			break;
		std::cout << "Mozliwych kombinacji:\n";
		std::cout << probality(numbers, picks, mega_begin, mega_end) << std::endl;
		std::cout << "Nastepne liczby:\n";
	}
	std::cout << "Podano bledne liczby, koniec programu.\n";
	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}

long double probality(unsigned numbers, unsigned picks, unsigned mega_begin, unsigned mega_end)
{
	if (picks > numbers)
	{
		std::cout << "to many picks!\n";
		return -1;
	}
	else if (mega_begin > mega_end || mega_end > numbers)
	{
		std::cout << "wrong range of mega number!\n";
		return -1;
	}
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;

	unsigned mega_range = mega_end - mega_begin + 1;
	result *= mega_range;
	return result;
}