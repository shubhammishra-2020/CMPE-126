#include <iostream>
#include "cashRegister.h"
using namespace std;

cashRegister::cashRegister() {
	this->cash = 0;
}

void cashRegister::depositAmount(int money) {
	cash = cash + money;
}

int cashRegister::getCurrentBalance() {
	return cash;
}