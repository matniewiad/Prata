#pragma once
// vect.h -- klasa Vector z operatorem << i prze��cznikiem trybu
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
	class Vector
	{
	public:
		enum Mode { RECT, POL };
		// RECT to wsp�rz�dne kartezja�skie, POL to wsp�rz�dne biegunowe
	private:
		double x;        // warto�� sk�adowej poziomej
		double y;        // warto�� sk�adowej pionowej
		double mag;      // d�ugo�� wektora
		double ang;      // kierunek wektora (w stopniach)
		Mode mode;       // RECT lub POL
						 // prywatne metody ustawiaj�ce sk�adowe
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	public:
		Vector();
		Vector(double n1, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~Vector();
		double xval() const { return x; }      // zwraca warto�� sk�adowej x
		double yval() const { return y; }      // zwraca warto�� sk�adowej y
		double magval() const { return mag; }  // zwraca d�ugo��
		double angval() const { return ang; }  // zwraca k�t
		void polar_mode();    // ustawia tryb na biegunowy (POL)
		void rect_mode();     // ustawia tryb na kartezja�ski (RECT)
							  // metody przeci��aj�ce operatory
		Vector operator+(const Vector & b) const;
		Vector operator-(const Vector & b) const;
		Vector operator-() const;
		Vector operator*(double n) const;
		// funkcje zaprzyja�nione
		friend Vector operator*(double n, const Vector & a);
		friend std::ostream &
			operator<<(std::ostream & os, const Vector & v);
	};
} // koniec przestrzeni nazw VECTOR
#endif


