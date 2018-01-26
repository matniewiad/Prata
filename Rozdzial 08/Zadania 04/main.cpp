#include <iostream>
#include <cstring>		//strlen(), strcpy()

struct stringy {
	char* str;			//lancuch
	int ct;				//dlugosc lancucha bez '\0'
};

void set(stringy& my_struct, char* napis);
void show(char* napis, int n = 1);
void show(const stringy& my_string, int n = 1);

int main()
{
	stringy beany;
	char testing[] = "Rzeczywistosc to juz nie to samo, co kiedys.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Gotowe!");

	std::cin.clear();
	while (std::cin.get() != '\n');
	delete[]beany.str;
	return 0;
}

void set(stringy& my_struct, char* napis)
{
	int napis_len = strlen(napis);
	char* new_napis = new char[napis_len + 1];		//+1 cuz -> '\n'
	new_napis[napis_len] = '\0';
	for (int i = 0; i < napis_len; i++)
		new_napis[i] = napis[i];
	//alternatywa do powyzszego -> strcpy();
	
	my_struct.ct = napis_len;
	my_struct.str = new_napis;
}

void show(char* napis, int n)
{
	for (int i = 0; i < n; i++)
		std::cout << napis << std::endl;
	std::cout << std::endl;
}

void show(const stringy& my_string, int n)
{
	for (int i = 0; i < n; i++)
		std::cout << my_string.str << std::endl;
	std::cout << std::endl;
}