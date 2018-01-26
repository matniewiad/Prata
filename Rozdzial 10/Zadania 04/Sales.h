#pragma once
namespace SALES
{
	class Sales
	{
	private:
		static const int QUARTERS = 4;
		double sales[QUARTERS];
		double average;
		double min;
		double max;
		void set_parameters();
	public:
		Sales();
		Sales(const double arr[], int n = 0);
		~Sales();
		void set_sales();
		void show_sales() const;
	};
}