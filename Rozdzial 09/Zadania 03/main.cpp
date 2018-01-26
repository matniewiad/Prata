#include <iostream>
#include <string>
#include <new>

struct Chaff {
	std::string dross;
	int slag;
};
char buffer1[50];

int main()
{
	std::cout << "Zadanie 3\n";
	Chaff *chaf1 = new (buffer1) Chaff[2];
	chaf1[0].dross = "aaa";
	chaf1[0].slag = 0;
	chaf1[1].dross = "bbb";
	chaf1[1].slag = 1;
	for (int i = 0; i < 2; i++)
	{
		std::cout << "dross " << i << ": " << chaf1[i].dross << std::endl;
		std::cout << "slag " << i << ": " << chaf1[i].slag << std::endl;
		std::cout << "adresy\n";
		std::cout << "&dross " << i << ": " << &chaf1[i].dross << std::endl;
		std::cout << "&slag " << i << ": " << &chaf1[i].slag << std::endl;
		std::cout << "\n\n";
	}

	Chaff *chaf2 = new (buffer1 + 2 * sizeof(Chaff)) Chaff[2];
	chaf2[0].dross = "ccc";
	chaf2[0].slag = 3;
	chaf2[1].dross = "ddd";
	chaf2[1].slag = 4;
	for (int i = 0; i < 2; i++)
	{
		std::cout << "dross " << i << ": " << chaf2[i].dross << std::endl;
		std::cout << "slag " << i << ": " << chaf2[i].slag << std::endl;
		std::cout << "adresy\n";
		std::cout << "&dross " << i << ": " << &chaf2[i].dross << std::endl;
		std::cout << "&slag " << i << ": " << &chaf2[i].slag << std::endl;
		std::cout << "\n\n";
	}

	std::cout << "Gotowe!\n";
	getchar();
	return 0;
}