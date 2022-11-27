#pragma once
#include <iostream>
using namespace std;

class Point {
public:
	Point();
	~Point();
	Point(double x);
	Point(double x, double y);
	void input();
	void output();
	void set_x(double i);
	void set_y(double j);
	double get_x();
	double get_y();
	friend void quarter(Point a);
	friend void quarter(Point a) {
		if (a.y > 0) {
			if (a.x > 0)
				cout << "����� ��������� � ������ ��������" << endl;
			else if (a.x < 0)
				cout << "����� ��������� �� ������ ��������" << endl;
		}
		else if (a.y < 0) {
			if (a.x < 0)
				cout << "����� ��������� � ������� ��������" << endl;
			else if (a.x > 0)
				cout << "����� ��������� � �������� ��������" << endl;
		}
		else cout << "����� ��������� � ������ ���������" << endl;
	};
	Point operator + (Point a);
	Point& operator ++();
	Point operator ++(int unused);
	string name;
private:
	double x;
	double y;
};