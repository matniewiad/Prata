#include <iostream>
#include <cctype>		//toupper()
#include <string>

void string_to_upper(std::string &napis);

int main()
{
	std::string napis{ "" };
	while (1)
	{
		std::cout << "Podaj lancuch (q, zeby skonczyc): ";
		std::getline(std::cin, napis);
		if (napis[0] == 'q' && napis[1] == NULL)
			break;
		string_to_upper(napis);
	}
	std::cout << "Gotowe!\n";
	std::cin.clear();
	while (std::cin.get() != '\n');
	return 0;
}

void string_to_upper(std::string &napis)
{
	std::cout << "Przed zmiana:  " << napis << std::endl;
	for (int i = 0; i < (int)napis.size(); i++)
		napis[i] = toupper(napis[i]);
	std::cout << "Po:  " << napis << std::endl;
}