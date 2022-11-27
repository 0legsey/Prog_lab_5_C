#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include "Circle.h"
using namespace std;

Circle::Circle() {
	center.set_x(0);
	center.set_y(0);
	circle_point.set_x(0);
	circle_point.set_y(0);
	radius = Segment();
	name = "Окружность";
}

Circle::~Circle() {

}

Circle::Circle(Point center) {
	this->center = center;
	circle_point = Point();
	radius = Segment(center, circle_point);
	name = "Окружность";
}

Circle::Circle(Point center, Point circle_point) {
	this->center = center;
	this->circle_point = circle_point;
	radius = Segment(center, circle_point);
	name = "Окружность";
}

void Circle::set_center(Point i) {
	center = i;
}

void Circle::set_circle_point(Point j) {
	circle_point = j;
}

void Circle::set_radius(Segment r) {
	radius = r;
}

Point Circle::get_center() {
	return center;
}

Point Circle::get_circle_point() {
	return circle_point;
}

Segment Circle::get_radius() {
	return radius;
}

void Circle::input() {
	cout << "Центр окружности:" << endl;
	center.input();
	cout << "Точка на окружности:" << endl;
	circle_point.input();
	radius = Segment(center, circle_point);
}

void Circle::output() {
	cout << "Координаты цента окружности: (" << center.get_x() << ", " << center.get_y() << ")" << endl;
	cout << "Координаты точки на окружности: (" << circle_point.get_x() << ", " << circle_point.get_y() << ")" << endl;
	cout << "Длина радиуса равна " << radius.get_length() << endl;
	cout << "Длина окружности равна " << *circle_length() << endl;
	double area = 0;
	double& area_ref = area;
	cout << "Площадь круга равна " << circle_area(area_ref) << endl;
}

double* Circle::circle_length() {
	double* len = new double;
	*len = 2 * M_PI * radius.get_length();
	return len;
}

double& Circle::circle_area(double& loc_area) {
	loc_area = M_PI * pow(radius.get_length(), 2);
	return loc_area;
}