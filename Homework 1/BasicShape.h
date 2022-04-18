using namespace std;
#ifndef BASIC_SHAPE_H
#define BASIC_SHAPE_H
class BasicShape {
protected:
	double area;
public:
	double getArea();
	virtual void calcArea() = 0;
};
#endif BASIC_SHAPE_H
