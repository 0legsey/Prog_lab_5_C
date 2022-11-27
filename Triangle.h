#pragma once
#include <iostream>
#include "Point.h"
#include "Segment.h"

class Triangle {
public:
	Triangle();
	~Triangle();
	Triangle(Point a);
	Triangle(Point a, Point b, Point c);
	void input();
	void output();
	void set_a(Point i);
	void set_b(Point j);
	void set_c(Point k);
	void set_ab(Segment z);
	void set_bc(Segment x);
	void set_ca(Segment c);
	Point get_a();
	Point get_b();
	Point get_c();
	Segment get_ab();
	Segment get_bc();
	Segment get_ca();
	double triangle_perimeter();
	double triangle_area();
	string name;
private:
	Segment ab;
	Segment bc;
	Segment ca;
	Point a;
	Point b;
	Point c;
};