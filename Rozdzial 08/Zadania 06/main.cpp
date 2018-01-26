#include <iostream>
#include <string>

template<typename T>
T maxn(T tab[], int n);

template <> const char* maxn(const char* tab[], int n);

int main()
{
	int tab_i[4]{ 1, 6, 20, 4 };
	double tab_d[5]{ 1.0, 33.3, 5.55, 9.9124, 33.2999 };
	const char* tab_c[3]{ "ala", "posiada", "kota" };
	std::cout << "maxn(tab_i): " << maxn(tab_i, 4) << std::endl;
	std::cout << "maxn(tab_d): " << maxn(tab_d, 5) << std::endl;
	std::cout << "maxn(tab_c): " << maxn(tab_c, 3) << std::endl;
	std::cout << "Gotowe!\n";
	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}

template<typename T>
T maxn(T tab[], int n)
{
	if (n <= 0)
		return (T)0;
	T max = tab[0];
	for (int i = 0; i < n; i++)
		if (tab[i] > max)
			max = tab[i];
	return max;
}

template <> const char* maxn(const char* tab[], int n)
{
	if (n <= 0)
		return '\0';
	int max_i = 0;		//indeks najdluzszego napisu
	int max_len = strlen(tab[0]);
	for (int i = 0; i < n; i++)
		if (strlen(tab[i]) > max_len)
		{
			max_len = strlen(tab[i]);
			max_i = i;
		}
	return tab[max_i];
}