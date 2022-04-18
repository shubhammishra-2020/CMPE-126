#ifndef CASHREGISTER_H
#define CASHREGISTER_H
#include <iostream>

class cashRegister {
private:
	int cash;
public:
	cashRegister();
	void depositAmount(int money);
	int getCurrentBalance();
};

#endif
