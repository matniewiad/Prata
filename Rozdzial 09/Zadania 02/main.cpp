#include <iostream>
#include <string>

void strcout(const std::string& my_string);

int main()
{
	std::cout << "Zadanie 2\n";
	std::string input;
	std::cout << "Wprowadz wiersz:\n";
	std::getline(std::cin, input);
	while (input != "")
	{
		strcout(input);
		std::cout << "Wproawdz nastepny wiersz (wiersz pusty konczy wprowadzanie):\n";
		std::getline(std::cin, input);
	}

	std::cout << "Gotowe!\n";
	std::cin.clear();
	while (std::cin.get() != '\n');
	getchar();
	return 0;
}

void strcout(const std::string& my_string)
{
	static int total = 0;
	int count = my_string.size();
	total += my_string.size();
	std::cout << "\"" << my_string << "\" zawiera " << count << " znakow.\n";
	std::cout << "Lacznie: " << total << " znakow.\n";
}
