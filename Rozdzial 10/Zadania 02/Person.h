#pragma once

class Person
{
private:
	static const int LIMIT = 256;
	std::string lname;		//nazwisko
	char fname[LIMIT];		//imie
public:
	Person() { lname = ""; fname[0] = '\0'; }
	Person(const std::string& ln, const char* fn = "HejTy");
	void show() const;
	void formal_show() const;
};