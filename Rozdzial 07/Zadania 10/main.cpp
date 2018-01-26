#include <iostream>

double calculate(double x, double y, double(*fun_ptr)(double x1, double x2));

double add(double x, double y);
double add2(double x, double y);
double add3(double x, double y);

int main()
{
	double a, b;
	std::cout << "Podaj 2 liczby do dodania (q konczy):\n";
	while (1)
	{
		if (!(std::cin >> a >> b))
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "Bledne dane. Koniec.\n";
			break;
		}
		std::cout << "add():  " << a << " + " << b << " = " << calculate(a, b, add) << std::endl;
		std::cout << "add2(): " << a << " + " << b << " = " << calculate(a, b, add2) << std::endl;
		std::cout << "add3(): " << a << " + " << b << " = " << calculate(a, b, add3) << std::endl;
	}

	std::cout << "\nA teraz tablica wskaznikow do fun\n";
	std::cout << "Podaj 2 liczby do dodania (q konczy):\n";
	double(*pf[3])(double, double) = { add, add2, add3 };
	while (1)
	{
		if (!(std::cin >> a >> b))
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "Bledne dane. Koniec.\n";
			break;
		}
		for (int i = 0; i < 3; i++)
			std::cout << "add" << i + 1 << "():  " << a << " + " << b << " = " << calculate(a, b, pf[i]) << std::endl;
	}


	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}

double add(double x, double y)
{
	return x + y;
}
double add2(double x, double y)
{
	return 0.99*x + 1.01*y;
}
double add3(double x, double y)
{
	return 1.01*x + 0.99*y;
}

double calculate(double x, double y, double(*fun_ptr)(double x1, double x2))
{
	return fun_ptr(x, y);
}