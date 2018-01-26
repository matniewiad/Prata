#include <iostream>
#include <string>
#include "Sales.h"
namespace SALES
{
	Sales::Sales()
	{
		for (int i = 0; i < QUARTERS; i++)
			sales[i] = 0.0;
		average = 0.0;
		min = 0.0;
		max = 0.0;
	}

	Sales::Sales(const double arr[], int n)
	{
		for (int i = 0; i < n && i < QUARTERS; i++)
			sales[i] = arr[i];
		for (int i = n; i < QUARTERS; i++)
			sales[i] = 0;

		set_parameters();
	}

	Sales::~Sales()
	{

	}

	void Sales::set_parameters()
	{
		double total = 0.0, temp_min = sales[0], temp_max = sales[0];
		for (int i = 0; i < QUARTERS; i++)
		{
			total += sales[i];
			if (sales[i] > temp_max)
				temp_max = sales[i];
			if (sales[i] < temp_min)
				temp_min = sales[i];
		}
		average = total / QUARTERS;
		min = temp_min;
		max = temp_max;
	}

	void Sales::set_sales()
	{
		std::string temp_s = "";
		double temp = 0.0;
		for (int i = 0; i < QUARTERS; i++)
		{
			temp = 0.0;
			std::cout << "Podaj dane za kwartal " << i + 1 << ": ";
			std::getline(std::cin, temp_s);
			while (1)
			{
				try
				{
					temp = std::stod(temp_s);
					break;
				}
				catch (...)
				{
					std::cout << "Podaj poprawna wartosc liczbowa: ";
					std::getline(std::cin, temp_s);
				}
			}
			sales[i] = temp;
		} 

		set_parameters();
	}

	void Sales::show_sales() const
	{
		std::cout << "Info\n";
		for (int i = 0; i < QUARTERS; i++)
			std::cout << "sales[" << i << "]: " << sales[i] << std::endl;
		std::cout << "avarge: " << average << std::endl;
		std::cout << "min: " << min << std::endl;
		std::cout << "max: " << max << std::endl << std::endl;
	}
}