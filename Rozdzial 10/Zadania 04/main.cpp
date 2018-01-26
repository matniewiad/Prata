#include <iostream>
#include "Sales.h"

int main()
{
	std::cout << "Zadanie 4\n";
	SALES::Sales my_sale1;
	double tab[4] = { 1.111, 2.22, 3.3, 4.4 };
	SALES::Sales my_sale2(tab, 2);
	my_sale1.show_sales();
	my_sale2.show_sales();
	my_sale1.set_sales();
	my_sale1.show_sales();

	std::cout << "Gotowe!\n";
	getchar();
	return 0;
}