#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Point.h"
using namespace std;

Point::Point() {
	x = y = 0;
	name = "Точка";
}

Point::~Point() {

}

Point::Point(double x) {
	this->x = x;
	y = 0;
	name = "Точка";
}

Point::Point(double x, double y) {
	this->x = x;
	this->y = y;
	name = "Точка";
}

void Point::set_x(double i) {
	x = i;
}

void Point::set_y(double j) {
	y = j;
}

double Point::get_x() {
	return x;
}

double Point::get_y() {
	return y;
}


void Point::input() {
	cout << "Введите координаты через пробел:\n";
	cin >> x >> y;
}

void Point::output() {
	cout << "Координаты точки: (" << x << ", " << y << ")";
}

Point Point::operator+(Point a) {
	Point b;
	b.x = this->x + a.x;
	b.y = this->y + a.y;
	return b;
}

Point& Point::operator++() {
	this->x++;
	this->y++;
	return *this;
}

Point Point::operator++(int unused) {
	Point c = *this;
	++* this;
	return c;
}
