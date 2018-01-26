// stonewt1.h -- uzupe�niona definicja klasy Stonewt
#ifndef STONEWT1_H_
#define STONEWT1_H_
using std::ostream;

class Stonewt
{
public:
	enum Mode { ST, PDint, PDdouble };
private:
	enum { Lbs_per_stn = 14 };	// liczba funt�w na kamie�
	int stone;					// masa w ca�ych kamieniach
	double pds_left;			// reszta w funtach
	double pounds;				// masa w funtach
	Mode mode;					//ST - kamienie+funty, PD-funty
public:
	Stonewt(double lbs, Mode m = ST);				// konstruktor dla funt�w
	Stonewt(int stn, double lbs, Mode m = ST);	// konstruktor dla kamieni i funt�w
	Stonewt();									// konstruktor domy�lny
	~Stonewt();
	//przelaczanie modow
	void set_ST() { mode = ST; }
	void set_PDint() { mode = PDint; }
	void set_PDdouble() { mode = PDdouble; }

	//przeciazenie operatorow		//wynik ma zawsze mode=ST
	Stonewt operator+(const Stonewt& st) const;
	Stonewt operator-(const Stonewt& st) const;
	Stonewt operator*(const Stonewt& st) const;
	Stonewt operator*(double mult) const;
	friend Stonewt operator*(double mult, const Stonewt& st) { return st*mult; }
	friend ostream & operator<<(ostream& os, const Stonewt& st);
	//operatory relacji (rozwi
	bool operator==(const Stonewt& st) const { return this->pounds == st.pounds; };
	bool operator!=(const Stonewt& st) const { return this->pounds != st.pounds; };
	bool operator>(const Stonewt& st) const { return this->pounds > st.pounds; };
	bool operator>=(const Stonewt& st) const { return this->pounds >= st.pounds; };
	bool operator<(const Stonewt& st) const { return this->pounds < st.pounds; };
	bool operator<=(const Stonewt& st) const { return this->pounds <= st.pounds; };
	// funkcje konwersji
	operator int() const;
	operator double() const;
};
#endif

