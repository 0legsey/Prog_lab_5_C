#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include "Segment.h"
using namespace std;

Point Segment::a1 = Point(0, 0);
Point Segment::b1 = Point(2, 0);

Segment::Segment() {
	a.set_x(0);
	a.set_y(0);
	b.set_x(0);
	b.set_y(0);
	length = 0;
	name = "Отрезок";
}

Segment::~Segment() {

}

Segment::Segment(Point a) {
	this->a = a;
	b = Point();
	length = length_calc();
	name = "Отрезок";
}

Segment::Segment(Point a, Point b) {
	this->a = a;
	this->b = b;
	length = length_calc();
	name = "Отрезок";
}

void Segment::set_a(Point i) {
	a = i;
}

void Segment::set_b(Point j) {
	b = j;
}

void Segment::set_length(double l) {
	length = l;
}

Point Segment::get_a() {
	return a;
}

Point Segment::get_b() {
	return b;
}

double Segment::get_length() {
	return length;
}

void Segment::input() {
	int p = 0;
	while (p == 0) {
		try {
			p = 1;
			cout << "Первая точка:" << endl;
			a.input();
			cout << "Вторая точка:" << endl;
			b.input();
			if (a.get_x() == b.get_x() && a.get_y() == b.get_y()) {
				throw 1;
			}
		}
		catch (...) {
			cout << endl;
			cout << "Точки не должны иметь общие координаты. Повторите попытку." << endl;
			p = 0;
		}
		if (p == 1) {
			length = length_calc();
		}
	}
}

void Segment::output() {
	cout << "Координаты первой точки: (" << a.get_x() << ", " << a.get_y() << ")" << endl;
	cout << "Координаты второй точки: (" << b.get_x() << ", " << b.get_y() << ")" << endl;
	cout << "Длина отрезка равна " << length;
}

double Segment::length_calc() {
	double len;
	len = pow(a.get_x() - b.get_x(), 2) + pow(a.get_y() - b.get_y(), 2);
	return sqrt(len);
}

double Segment::degrees_calc(Segment s) {
	Segment s1 = Segment(a1, b1);
	double cos;
	double degree;
	cos = ((a1.get_x() - b1.get_x()) * (s.a.get_x() - s.b.get_x()) + (a1.get_y() - b1.get_y()) * (s.a.get_y() - s.b.get_y())) / (s.get_length() * s1.get_length());
	degree = acos(cos) * 180 / M_PI;
	return degree;
}