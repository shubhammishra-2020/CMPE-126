#include <iostream>
using namespace std;
#include "BasicShape.h"
#include "Circle.h"



Circle::Circle(long x, long y, double r) {
	this ->centerX = x;
	this->centerY = y;
	this->radius = r;
}

void Circle::calcArea() {
	area = 3.14159 * (radius * radius);
}

long Circle::getcenterX() {
	return centerX;
}

long Circle::getcenterY() {
	return centerY;
}