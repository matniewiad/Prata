#pragma once
#include <iostream>
class Plorg
{
private:
	static const int MAX = 19;
	std::string name;
	int sytosc;
public:
	Plorg(std::string nm = "Plorga", double ci = 50);
	~Plorg();
	void show_plorg() const;
	void set_ci(int ci);
};