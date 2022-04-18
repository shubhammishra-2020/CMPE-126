#include <iostream>
#include "BasicShape.h"
#include "Rectangle.h"

Rectangle::Rectangle(long w, long l) {
	this->length = l;
	this->width = w;
}

long Rectangle::getWidth() {
	return width;
}

long Rectangle::getLength() {
	return length;
}

void Rectangle::calcArea() {
	area = length * width;
}