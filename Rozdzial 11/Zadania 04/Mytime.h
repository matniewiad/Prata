// mytime3.h -- klasa Time z funkcjami zaprzyjaünionymi
#ifndef MYTIME3_H_
#define MYTIME3_H_
#include <iostream>

using std::ostream;

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	//przeciazenie przez metody
	//Time operator+(const Time & t) const;
	//Time operator-(const Time & t) const;
	//Time operator*(double n) const;
	//przeciazenie przez funkcje
	friend Time operator+(const Time& t1, const Time& t2);
	friend Time operator-(const Time& t1, const Time& t2);
	friend Time operator*(const Time& t1, double m);
	friend Time operator*(double m, const Time & t)
	{
		return t * m;
	} // definicja miejscowa (inline)
	friend ostream & operator<<(ostream & os, const Time & t);
};
#endif

