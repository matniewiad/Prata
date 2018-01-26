#include <iostream>

double harmonic_mean(double x, double y);

int main()
{
	double a, b;
	std::cout << "Enter pairs of numbers. (0 ends)\n";
	do {
		std::cin >> a >> b;
		std::cout << "Harmonic mean of " << a << " and " << b << " is " << harmonic_mean(a, b) << std::endl;
		std::cin.clear();
		while (std::cin.get() != '\n');
	} while (a != 0 && b != 0);
	std::cin.ignore();
	getchar();
	return 0;
}

double harmonic_mean(double x, double y)
{
	return (2.0 * x * y) / (x + y);
}