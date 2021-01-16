#include <iostream>
using namespace std;
#include<string>
#include"point.h"
#include"circle.h"
//class Point {
//public:
//	void setX(int x) {
//		m_X = x;
//	}
//	int getX() {
//		return m_X;
//	}
//	void setY(int y) {
//		m_Y = y;
//	}
//	int getY() {
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};

//class Circle {
//public:
//	void setR(int r) {
//		m_R = r;
//	}
//	int getR() {
//		return m_R;
//	}
//	void setCenter(Point c) {
//		m_Center = c;
//	}
//	Point getCenter() {
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;
//};
//判断点和圆的关系
void isInCircle(Circle& c, Point& p) {
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	int rdis = c.getR() * c.getR();
	if (distance == rdis) {
		cout << "point on the circle" << endl;
	}
	else if (distance> rdis) {
		cout << "point out the circle" << endl;
	}
	else {
		cout << "point in the circle" << endl;
	}
}

int fun6() {
	
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	Point p;
	p.setX(10);
	p.setY(11);

	isInCircle(c, p);

	system("pause");
	return 0;
}
//p106