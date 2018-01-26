#pragma once
namespace SALES
{
	const int QUARTES = 4;
	struct Sales {
		double sales[QUARTES];
		double average;
		double max;
		double min;
	};

	void setSales(Sales& s, const double ar[], int n=QUARTES);

	void setSales(Sales& s);

	void showSales(const Sales& s);
}