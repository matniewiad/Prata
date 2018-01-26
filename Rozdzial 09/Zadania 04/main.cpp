#include <iostream>
#include "Sales.h"

int main()
{
	SALES::Sales my_sale1;
	SALES::Sales my_sale2;
	double tab_d[4]{ 5.5, 3.3, 8.8, 1.1 };
	int n = 2;
	SALES::setSales(my_sale1);
	SALES::showSales(my_sale1);
	SALES::setSales(my_sale2, tab_d);
	SALES::showSales(my_sale2);
	SALES::setSales(my_sale2, tab_d, n);
	SALES::showSales(my_sale2);

	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}