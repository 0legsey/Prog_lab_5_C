#pragma once
#include <iostream>
#include "Point.h"
#include "Segment.h"

class Square {
public:
	Square();
	~Square();
	Square(Point b);
	Square(Point b, Point d);
	void input();
	void output();
	void set_b(Point i);
	void set_d(Point j);
	void set_diagonal(Segment r);
	Point get_b();
	Point get_d();
	Segment get_diagonal();
	double square_perimeter();
	double square_area();
	string name;
private:
	Segment diagonal;
	Point b;
	Point d;
};