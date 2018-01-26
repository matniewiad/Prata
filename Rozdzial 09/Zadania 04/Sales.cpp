#include <iostream>
#include "Sales.h"

namespace SALES
{
	void setSales(Sales& s, const double ar[], int n)
	{
		double min_temp, max_temp, sum = 0;

		for (int i = 0; i < n && i < QUARTES; i++)
			s.sales[i] = ar[i];
		for (int i = n; i < QUARTES; i++)
			s.sales[i] = 0.0;

		min_temp = s.sales[0];
		max_temp = s.sales[0];
		for (int i = 0; i < QUARTES; i++)
		{
			sum += s.sales[i];
			if (s.sales[i] > max_temp)
				max_temp = s.sales[i];
			if (s.sales[i] < min_temp)
				min_temp = s.sales[i];
		}
		s.min = min_temp;
		s.max = max_temp;
		s.average = sum / QUARTES;
	}

	void setSales(Sales& s)
	{
		double min_temp, max_temp, sum=0;
		for (int i = 0; i < QUARTES; i++)
		{
			std::cout << "Podaj wartosc " << i + 1 << ": ";
			std::cin >> s.sales[i];
		}
		min_temp = s.sales[0];
		max_temp = s.sales[0];
		for (int i = 0; i < QUARTES; i++)
		{
			sum += s.sales[i];
			if (s.sales[i] > max_temp)
				max_temp = s.sales[i];
			if (s.sales[i] < min_temp)
				min_temp = s.sales[i];
		}
		s.min = min_temp;
		s.max = max_temp;
		s.average = sum / QUARTES;
	}

	void showSales(const Sales& s)
	{
		std::cout << "Info\n";
		for (int i = 0; i < QUARTES; i++)
			std::cout << "sales[" << i << "]: " << s.sales[i] << std::endl;
		std::cout << "avarge: " << s.average << std::endl;
		std::cout << "min: " << s.min << std::endl;
		std::cout << "max: " << s.max << std::endl << std::endl;
	}
}