#include <iostream>

const int SLEN = 30;
struct Student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(Student pa[], int n);
void display1(Student st);
void display2(const Student * ps);
void display3(const Student pa[], int n);

int main()
{
	std::cout << "Podaj wielkosc grupy: ";
	int class_size;
	std::cin >> class_size;
	while (std::cin.get() != '\n');
	Student* ptr_stu = new Student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;

	std::cin.clear();
	while (std::cin.get() != '\n');
	std::cout << "Gotowe!\n";
	getchar();
	return 0;
}

int getinfo(Student pa[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		std::cout << "Podaj dane studenta nr " << i + 1 << std::endl;
		std::cout << "nazwisko: ";
		std::cin.getline(pa[i].fullname, SLEN);
		std::cout << "hobby: ";
		std::cin.getline(pa[i].hobby, SLEN);
		std::cout << "ooplevel: ";
		std::cin >> pa[i].ooplevel;
		std::cin.clear();
		while (std::cin.get() != '\n');
		if (pa[i].fullname[0] == NULL)
			break;
	}
	std::cout << "Koniec wczytywania studentow.\n";

	return i;
}

void display1(Student st)
{
	std::cout << "Nazwisko: " << st.fullname << "\nHobby: " << st.hobby << "\nooplvl: " << st.ooplevel << std::endl;
}

void display2(const Student * ps)
{
	std::cout << "Nazwisko: " << ps->fullname << "\nHobby: " << ps->hobby << "\nooplvl: " << ps->ooplevel << std::endl;
}

void display3(const Student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << "Student " << i + 1 << std::endl;
		std::cout << "Nazwisko: " << pa[i].fullname << "\nHobby: " << pa[i].hobby << "\nooplvl: " << pa[i].ooplevel << std::endl;
	}
	std::cout << std::endl;
}

