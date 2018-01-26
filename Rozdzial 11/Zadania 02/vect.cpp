// vect.cpp -- implementacje metod klasy Vector
#include <cmath>
#include "vect.h"        // w��cza plik nag��wkowy <iostream>
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
	// przelicznik radian�w na stopnie
	const double Rad_to_deg = 45.0 / atan(1.0);
	// powinno wyj�� oko�o 57.2957795130823
	// metody prywatne

	// oblicza sk�adow� x ze wsp�rz�dnych biegunowych
	void Vector::set_x(double mag, double ang)
	{
		x = mag * cos(ang);
	}

	// oblicza sk�adow� y ze wsp�rz�dnych biegunowych
	void Vector::set_y(double mag, double ang)
	{
		y = mag * sin(ang);
	}

	// metody publiczne
	Vector::Vector()          // konstruktor domy�lny
	{
		x = y = 0.0;
		mode = RECT;
	}

	// konstruuje wektor o zadanych wsp�rz�dnych biegunowych (w trybie 'p')
	// b�d� prostok�tnych (w domy�lnym trybie 'r')
	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
		}
		else if (form == POL)
		{
			double mag = n1;
			double ang = n2 / Rad_to_deg;
			set_x(mag, ang);
			set_y(mag, ang);
		}
		else
		{
			cout << "Niepoprawna warto�� trzeciego argumentu Vector() -- ";
			cout << "zeruj� wektor\n";
			x = y = 0.0;
			mode = RECT;
		}
	}

	// zerowanie warto�ci wektora dla zadanych wsp�rz�dnych kartezja�skich (dla RECT)
	// albo dla zadanych wsp�rz�dnych biegunowych (POL)
	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
		}
		else if (form == POL)
		{
			double mag = n1;
			double ang = n2 / Rad_to_deg;
			set_x(mag, ang);
			set_y(mag, ang);
		}
		else
		{
			cout << "Niepoprawny trzeci argument set() -- ";
			cout << "zeruj� wektor\n";
			x = y = 0.0;
			mode = RECT;
		}
	}

	Vector::~Vector()   // destruktor
	{
	}

	double Vector::magval() const
	{
		return sqrt(x * x + y * y);
	}

	double Vector::angval() const
	{
		if (x == 0.0 && y == 0.0)
			return 0.0;
		else
			return atan2(y, x);
	}

	void Vector::polar_mode()  // prze��cza do reprezentacji biegunowej
	{
		mode = POL;
	}

	void Vector::rect_mode()   // prze��cza do reprezentacji kartezja�skiej
	{
		mode = RECT;
	}

	// przeci��one operatory
	// dodawanie dw�ch wektor�w
	Vector Vector::operator+(const Vector & b) const
	{
		return Vector(x + b.x, y + b.y);
	}

	// odejmowanie wektora b od wektora a
	Vector Vector::operator-(const Vector & b) const
	{
		return Vector(x - b.x, y - b.y);
	}

	// zmienia znak wektora
	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}

	// mno�y wektor wywo�uj�cy przez n
	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, n * y);
	}

	// funkcje zaprzyja�nione
	// mno�y n przez wektor a
	Vector operator*(double n, const Vector & a)
	{
		return a * n;
	}

	// wy�wietla wsp�rz�dne wektora (prostok�tne w trybie RECT,
	// biegunowe w trybie POL)
	std::ostream & operator<<(std::ostream & os, const Vector & v)
	{
		if (v.mode == Vector::RECT)
			os << "(x,y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == Vector::POL)
			os << "(m,a) = (" << v.magval() << ", " << v.angval() * Rad_to_deg << ")";
		else
			os << "Niepoprawny tryb reprezentacji obiektu wektora";
		return os;
	}
} // koniec przestrzeni nazw VECTOR

