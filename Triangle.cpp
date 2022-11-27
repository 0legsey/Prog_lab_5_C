#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
#include "Triangle.h"
using namespace std;

Triangle::Triangle() {
	a.set_x(0);
	a.set_y(0);
	b.set_x(0);
	b.set_y(0);
	c.set_x(0);
	c.set_y(0);
	ab = Segment();
	bc = Segment();
	ca = Segment();
	name = "Треугольник";
}

Triangle::~Triangle() {

}

Triangle::Triangle(Point a) {
	this->a = a;
	b = Point(0, 0);
	c = Point(0, 2);
	ab = Segment(a, b);
	bc = Segment(b, c);
	ca = Segment(c, a);
	name = "Треугольник";
}

Triangle::Triangle(Point a, Point b, Point c) {
	this->a = a;
	this->b = b;
	this->c = c;
	ab = Segment(a, b);
	bc = Segment(b, c);
	ca = Segment(c, a);
	name = "Треугольник";
}

void Triangle::set_a(Point i) {
	a = i;
}

void Triangle::set_b(Point j) {
	b = j;
}

void Triangle::set_c(Point k) {
	c = k;
}

void Triangle::set_ab(Segment z) {
	ab = z;
}

void Triangle::set_bc(Segment x) {
	bc = x;
}

void Triangle::set_ca(Segment c) {
	ca = c;
}

Point Triangle::get_a() {
	return a;
}

Point Triangle::get_b() {
	return b;
}

Point Triangle::get_c() {
	return c;
}

Segment Triangle::get_ab() {
	return ab;
}

Segment Triangle::get_bc() {
	return bc;
}

Segment Triangle::get_ca() {
	return ca;
}

void Triangle::input() {
	cout << "Точка A треугольника:" << endl;
	a.input();
	cout << "Точка B треугольника:" << endl;
	b.input();
	cout << "Точка C треугольника:" << endl;
	c.input();
	ab = Segment(a, b);
	bc = Segment(b, c);
	ca = Segment(c, a);
}

void Triangle::output() {
	cout << "Координаты точки A треугольника: (" << a.get_x() << ", " << a.get_y() << ")" << endl;
	cout << "Координаты точки B треугольника: (" << b.get_x() << ", " << b.get_y() << ")" << endl;
	cout << "Координаты точки C треугольника: (" << c.get_x() << ", " << c.get_y() << ")" << endl;
	cout << "Длина отрезка AB равна " << ab.get_length() << endl;
	cout << "Длина отрезка BC равна " << bc.get_length() << endl;
	cout << "Длина отрезка CA равна " << ca.get_length() << endl;
	cout << "Периметр треугольника равен " << triangle_perimeter() << endl;
	cout << "Площадь треугольника равна " << triangle_area() << endl;
}

double Triangle::triangle_perimeter() {
	double perimeter;
	perimeter = ab.get_length() + bc.get_length() + ca.get_length();
	return perimeter;
}

double Triangle::triangle_area() {
	double area;
	double half_perimeter = triangle_perimeter() / 2;
	area = sqrt(half_perimeter * (half_perimeter - ab.get_length()) * (half_perimeter - bc.get_length()) * (half_perimeter - ca.get_length()));
	return area;
}