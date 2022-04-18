#include "BasicShape.h"
#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle : public BasicShape {
	long width;
	long length;
public:
	Rectangle(long w, long l);
	void calcArea();
	long getWidth();
	long getLength();
};
#endif RECTANGLE_H