#include <iostream>
#include <string>

void show_string(const char* napis, int n = 0);

int main()
{
	std::cout << "Zadanie 1\n\n";
	const char* napis = "ala ma kota";
	show_string(napis);
	std::cout << "***\n";
	show_string(napis, -5);
	std::cout << "***\n";
	show_string(napis);
	std::cout << "***\n";
	show_string(napis,999);
	std::cout << "***\n";

	getchar();
	return 0;
}

void show_string(const char* napis, int n)
{
	static int licznik_wywolan = 0;
	licznik_wywolan++;

	if (n == 0)
	{
		std::cout << napis << std::endl;
		return;
	}
	else
		for (int i = 0; i < licznik_wywolan; i++)
			std::cout << napis << std::endl;
}