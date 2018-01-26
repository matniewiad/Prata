#include <iostream>
#include "Move.h"

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

Move::~Move()
{

}

void Move::show_move() const
{
	std::cout << "(x, y):    (" << x << ", " << y << ")\n";
} 

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}

Move Move::add(const Move& m) const
{
	double tempx = 0.0, tempy = 0.0;
	tempx = this->x + m.x;
	tempy = this->y + m.y;
	return Move(tempx, tempy);
}