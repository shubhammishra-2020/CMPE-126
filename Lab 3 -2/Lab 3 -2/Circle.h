#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
	double radius;
public:
	Circle(double r);
	virtual void calcArea();
	double getRadius();

};

Circle::Circle(double r) {
	radius = r;
}

void Circle::calcArea() {
	area = 3.14159 * radius * radius;
	cout << "The area of the Circle is: " << area << endl;
}

double Circle::getRadius() {
	return radius;
}


#endif // !CIRCLE_H
