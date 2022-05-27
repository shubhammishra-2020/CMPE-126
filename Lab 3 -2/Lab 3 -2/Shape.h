#ifndef SHAPE_H

#define SHAPE_H

class Shape {
protected:
	double area;
public:
	Shape();
	virtual void calcArea() = 0;
};


Shape::Shape() {
	this->area = 0;
}
#endif // !SHAPE_H
