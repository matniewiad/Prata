#include <iostream>
#include <cstdlib>    // prototypy funkcji rand() i srand()
#include <ctime>      // prototyp funkcji time()
#include "vect.h"
#include <fstream>

int main()
{
	std::cout << "Zadanie1\n";
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));   // inicjalizacja generatora liczb pseudolosowych
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	fstream plik;
	plik.open("dane.txt", ios::out);
	cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
	while (cin >> target)
	{
		cout << "Podaj dlugosc kroku: ";
		if (!(cin >> dstep))
			break;
		plik << "Dystans do przejscia: " << target << ", dlugosc kroku: " << dstep << endl;
		plik << steps << ": " << result << endl;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			plik << steps << ": " << result << endl;
		}
		//konsola
		cout << "Po " << steps << " krokach delikwent "
			"osiagnal polozenie:\n";
		cout << result << endl;
		result.polar_mode();
		cout << " czyli\n" << result << endl;
		cout << "Srednia dlugosc kroku pozornego = "
			<< result.magval() / steps << endl;

		//plik
		result.rect_mode();
		plik << "Po " << steps << " krokach delikwent "
			"osiagnal polozenie:\n";
		plik << result << endl;
		result.polar_mode();
		plik << " czyli\n" << result << endl;
		plik << "Srednia dlugosc kroku pozornego = "
			<< result.magval() / steps << endl << endl << endl;

		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
	}
	plik.close();
	cout << "Koniec!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}