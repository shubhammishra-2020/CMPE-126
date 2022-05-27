#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {
private:
	double base, height;
public:
	Rectangle(double b, double h);
	virtual void calcArea();
};
Rectangle::Rectangle(double b, double h) {
	base = b;
	height = h;
}

void Rectangle::calcArea() {
	area = base * height;
	cout << "The area of the rectangle is: " << area << endl;
}
#endif // !RECTANGLE_H
