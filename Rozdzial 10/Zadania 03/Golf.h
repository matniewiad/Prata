#pragma once
#include <iostream>

class Golf
{
private:
	std::string fullname;
	int handicap;
public:
	Golf(std::string name = "", int hc = 0);
	~Golf();

	void set_golf();
	void show_golf() const;
	void set_handicap(int hc);
};