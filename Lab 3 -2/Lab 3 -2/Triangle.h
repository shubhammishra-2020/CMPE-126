#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle : public Shape {
private:
	double length, height;
public:
	Triangle(double l, double h);
	virtual void calcArea();
};

Triangle::Triangle(double l, double h) {
	length = l;
	height = h;

}

void Triangle::calcArea() {
	area = 0.5 * length * height;
	cout << "The area of the Triangle is: " << area << endl;
}

#endif // !TRIANGLE_H
