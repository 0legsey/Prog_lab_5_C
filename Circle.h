#pragma once
#include <iostream>
#include "Segment.h"
#include "Point.h"

class Circle {
public:
	Circle();
	~Circle();
	Circle(Point center);
	Circle(Point center, Point circle_point);
	void input();
	void output();
	void set_center(Point i);
	void set_circle_point(Point j);
	void set_radius(Segment r);
	Point get_center();
	Point get_circle_point();
	Segment get_radius();
	double* circle_length();
	double& circle_area(double& area);
	string name;
private:
	Segment radius;
	Point center;
	Point circle_point;
};