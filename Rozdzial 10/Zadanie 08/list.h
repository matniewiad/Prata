#pragma once

typedef int Item;
class List
{
private:
	static const int MAX = 10;
	Item tab[MAX];
	int index;
public:
	List();
	~List();
	bool is_empty() const;
	bool is_full() const;
	void add_item(const Item&);
	int size() const;
	void visit(void(*pf)(Item&));
	void show_list() const;
	void reset();
	void pop(Item&);
};