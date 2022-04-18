#include <iostream>
#include "Product.h"
using namespace std;

Product::Product(int price, int quantity) {
	this ->cost = price;
	this->count = quantity;

}
int Product::getCost() {
	return cost;
 }

int Product::getCount() {
	return count;
}
void Product::releaseItem(int released) {
	count = count - released;
}

