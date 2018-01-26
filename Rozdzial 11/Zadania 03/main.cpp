// randwalk.cpp -- test klasy Vector
// kompilowac z plikiem vect.cpp
#include <iostream>
#include <cstdlib>    // prototypy funkcji rand() i srand()
#include <ctime>      // prototyp funkcji time()
#include "vect.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));   // inicjalizacja generatora liczb pseudolosowych
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	unsigned long min_steps = ULONG_MAX;
	unsigned long max_steps = 0;
	unsigned long total_steps = 0;
	double target;
	double dstep;
	unsigned int N = 0;
	cout << "Podaj liczbe iteracji(k, aby zakonczyc): ";
	if (!(cin >> N))
		return 0;
	cout << "Podaj dystans do przejscia: ";
	if (!(cin >> target))
		return 0;
	cout << "Podaj dlugosc kroku: ";
	if (!(cin >> dstep))
		return 0;

	for(int i = 0 ; i < N ; i++)
	{
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		if (steps > max_steps)
			max_steps = steps;
		if (steps < min_steps)
			min_steps = steps;
		total_steps += steps;
		steps = 0;
		result.reset(0.0, 0.0);
	}
	cout << "Koniec!\n";
	cout << "Minimalna liczba krokow: " << min_steps << endl;
	cout << "Maksymalna liczba krokow: " << max_steps << endl;
	cout << "Srednia liczba krokow: " << total_steps / (double)N << endl;
	cin.clear();
	while (cin.get() != '\n')
		continue;
	getchar();
	return 0;
}

