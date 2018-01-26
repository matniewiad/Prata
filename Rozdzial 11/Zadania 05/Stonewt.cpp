// stonewt.cpp -- implementacje metod klasy Stonewt z funkcjami konwersji
#include <iostream>
using std::cout;
#include "Stonewt.h"

// konstruuje obiekt Stonewt z wartoœci typu double
Stonewt::Stonewt(double lbs, Mode m)
{
	mode = m;
	stone = int(lbs) / Lbs_per_stn; // dzielenie ca³kowite
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

// konstruuje obiekt Stonewt z liczby kamieni i funtów
Stonewt::Stonewt(int stn, double lbs, Mode m)
{
	mode = m;
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt() // konstruktor domyœlny, zeruje obiekt
{
	stone = pounds = pds_left = 0;
	mode = ST;
}
Stonewt::~Stonewt() // destruktor
{
}

// funkcje konwersji
Stonewt::operator int() const
{
	return int(pounds + 0.5);
}

Stonewt::operator double() const
{
	return pounds;
}

//przeciazenie operatorow
Stonewt Stonewt::operator+(const Stonewt& st) const
{
	Stonewt temp;
	temp.pounds = this->pounds + st.pounds;
	temp.stone = (int)temp.pounds / Lbs_per_stn;
	temp.pds_left = (int)temp.pounds % Lbs_per_stn + temp.pounds - (int)temp.pounds;
	return temp;
}

Stonewt Stonewt::operator-(const Stonewt& st) const
{
	Stonewt temp;
	temp.pounds = this->pounds - st.pounds;
	temp.stone = (int)temp.pounds / Lbs_per_stn;
	temp.pds_left = (int)temp.pounds % Lbs_per_stn + temp.pounds - (int)temp.pounds;
	return temp;
}

Stonewt Stonewt::operator*(const Stonewt& st) const
{
	Stonewt temp;
	temp.pounds = this->pounds * st.pounds;
	temp.stone = (int)temp.pounds / Lbs_per_stn;
	temp.pds_left = (int)temp.pounds % Lbs_per_stn + temp.pounds - (int)temp.pounds;
	return temp;
}

Stonewt Stonewt::operator*(double mult) const
{
	Stonewt temp;
	temp.pounds = this->pounds * mult;
	temp.stone = (int)temp.pounds / Lbs_per_stn;
	temp.pds_left = (int)temp.pounds % Lbs_per_stn + temp.pounds - (int)temp.pounds;
	return temp;
}

ostream & operator<<(ostream& os, const Stonewt& st)
{
	if (st.mode == Stonewt::ST)
		os << st.stone << " kamieni, " << st.pds_left << " funtow";
	else if (st.mode == Stonewt::PDdouble)
		os << st.pounds << " funtow";
	else if (st.mode == Stonewt::PDint)
		os << (int)(st.pounds+0.5) << " funtow";			//trick z zaokraglaniem
	else
		os << "Niepoprawny tryb reprezentacji obiektu wektora";
	return os;
}
