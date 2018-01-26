#include <iostream>

long double silnia(unsigned n);

int main()
{
	std::cout << "Program liczy silnie\n";
	int n;
	while (std::cin >> n && n >= 0)
	{
		if(std::cin)
			std::cout << n << "! = " << silnia(n) << std::endl;
	}
	std::cout << "Bledne dane, koniec programu\n";

	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}

long double silnia(unsigned n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n*silnia(n - 1);
}