#include <iostream>
using namespace std;
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
	Circle c(1,1,2);
	Rectangle r(1, 2);
	c.calcArea();
	r.calcArea();

	cout << "Area of Rectangle: " << r.getArea() << endl;
	cout << "Area of Circle: " << c.getArea() << endl;
	
}
