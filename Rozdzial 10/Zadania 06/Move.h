#pragma once

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0.0, double b = 0.0);
	~Move();
	void show_move() const;
	Move add(const Move & m) const;
	void reset(double a = 0.0, double b = 0.0);


};
