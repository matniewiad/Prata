#include <iostream>
#include "Person.h"
#include <string>

Person::Person(const std::string& ln, const char* fn)
{
	lname = ln;
	strncpy_s(fname, fn, LIMIT);
}

void Person::show() const
{
	std::cout << fname << " " << lname << std::endl;
}

void Person::formal_show() const
{
	std::cout << lname << " " << fname << std::endl;
}