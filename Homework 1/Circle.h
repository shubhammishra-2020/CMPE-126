#include "BasicShape.h"
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public BasicShape {
private:
	long centerX;
	long centerY;
	double radius;
public:
	Circle(long x, long y, double r);
	void calcArea();
	long getcenterX();
	long getcenterY();
};

#endif CIRCLE_H
