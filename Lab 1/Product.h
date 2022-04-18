#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>

class Product {
private:
	int cost;
	int count;
public:
	Product(int price, int quantity);
	int getCost();
	int getCount();
	void releaseItem(int count);

};
#endif

