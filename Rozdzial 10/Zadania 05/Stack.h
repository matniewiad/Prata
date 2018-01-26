#pragma once
struct Customer {
	std::string fullname;
	double payment;
};

typedef Customer Item;
class Stack
{
private:
	static const int MAX = 10;
	Item tab[MAX];
	int top;
public:
	Stack();
	~Stack();
	bool is_empty() const { return top == 0; };
	bool is_full() const { return top == MAX; };
	void push(const Item& it);
	void pop(Item & it);
};
