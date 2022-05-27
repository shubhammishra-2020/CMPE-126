#include <iostream>
using namespace std;
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <vector>

int main() {
	int option = 10000;
	double r = 0;
	double l = 0, h = 0;
	double b = 0, t = 0;
	int cycle = 0;
	vector <Shape*> sh(3);
	while (option != 0) {
		cout << "What shape would you like?" << endl;
		cout << "1. Circle \n2. Triangle \n3. Rectangle" << endl;
		cin >> option;

		switch (option) {
		case 1:
			cout << "Enter a radius value ";
			cin >> r;
			sh[0] = new Circle(r);
			sh[0]->calcArea();
			cout << "Would you like to end? Press 0, any other number to continue ";
			cin >> option;
			break;

		case 2:
			cout << "Enter a length and height value (length followed by a space then height) ";
			cin >> l >> h;
			sh[1] = new Triangle(l, h);
			sh[1]->calcArea();
			cout << "Would you like to end? Press 0, any other number to continue ";
			cin >> option;
			break;

		case 3:
			cout << "Enter a base and height value (base followed by a space then height) ";
			cin >> b >> t;
			sh[2] = new Rectangle(b, t);
			sh[2]->calcArea();
			cout << "Would you like to end? Press 0, any other number to continue ";
			cin >> option;
			break;
		}
	}

}