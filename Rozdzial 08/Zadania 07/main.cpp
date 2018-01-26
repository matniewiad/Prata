#include <iostream>

template<typename T>			//szablon A
T sum_array(T arr[], int n);

template<typename T>			//szablon B
T sum_array(T * arr[], int n);

struct Debts {
	char name[50];
	double amount;
};

int main()
{
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct Debts mr_E[3] = { {"Ima Wolfe", 2400.0}, {"Ura Foxe", 1300.0}, {"Iby Scout", 1800.0} };
	double * pd[3];
	for(int i = 0 ; i < 3 ; i++)
		pd[i] = &mr_E[i].amount;

	std::cout << "Suma rzeczy pana E.: " << sum_array(things, 6) << std::endl;
	std::cout << "Suma dlugow pana E.: " << sum_array(pd, 3) << std::endl;

	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}

template<typename T>			//szablon A
T sum_array(T arr[], int n)
{
	T sum = (T)0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum;
}

template<typename T>			//szablon B
T sum_array(T * arr[], int n)
{
	T sum = (T)0;
	for (int i = 0; i < n; i++)
		sum += *arr[i];
	return sum;
}