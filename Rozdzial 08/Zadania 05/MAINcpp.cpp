#include <iostream>

template<typename T>
T max5(T tab[]);

int main()
{
	int tab_int[5]{ 1, 2, 3, 66, 4 };
	double tab_d[5]{ 1.5, 1.2, 1.99, 0.99, 1.991 };
	std::cout << "max tab_int: " << max5(tab_int) << std::endl;
	std::cout << "max tab_d: " << max5(tab_d) << std::endl;

	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}

template<typename T>
T max5(T tab[])
{
	T max = tab[0];
	for (int i = 0; i < 5; i++)
		if (tab[i] > max)
			max = tab[i];
	return max;
}