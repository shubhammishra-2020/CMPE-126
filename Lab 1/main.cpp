#include <iostream>
#include "Product.h"
#include "cashRegister.h"
using namespace std;

int main() {
	
	Product appleJuice(3, 1);
	Product orangeJuice(4, 2); 
	Product mangoLassi(5, 3); 
	Product fruitJuice(6, 4);
	
	cashRegister money;
	int deposit;
	int size;
	int counter = 0;

	while (appleJuice.getCount() != 0 && orangeJuice.getCount() != 0 && mangoLassi.getCount() != 0 && fruitJuice.getCount() != 0) {
		cout << "How many drinks would you like to order ";
		cin >> size;
		int* selection = new int[size];
		for (int i = 0; i < size; i++) {
			do {
				if (appleJuice.getCount() != 0) {
					cout << "1. Apple Juice" << endl;
				}
				if (orangeJuice.getCount() != 0) {
					cout << "2. Orange Juice" << endl;
				}
				if (mangoLassi.getCount() != 0) {
					cout << "3. Mango Lassi" << endl;
				}
				if (fruitJuice.getCount() != 0) {
					cout << "4. Fruit Punch" << endl;
				}
				cout << "Make a selection : ";
				cin >> selection[i];
			} while (selection[i] < 1 || selection[i] >4);
		}
		int total = 0;
		for (int i = 0; i < size; i++) {
			switch (selection[i]) {
			case 1:
				cout << "Cost of Apple Juice : $" << appleJuice.getCost() << endl;
				total = total + appleJuice.getCost();
				break;
			case 2:
				cout << "Cost of Orange Juice : $" << orangeJuice.getCost() << endl;
				total = total + orangeJuice.getCost();
				break;
			case 3:
				cout << "Cost of Mango Lassi : $" << mangoLassi.getCost() << endl;
				total = total + mangoLassi.getCost();
				break;
			case 4:
				cout << "Cost of Fruit Juice : $" << fruitJuice.getCost() << endl;
				total = total + fruitJuice.getCost();
				break;
			}
		}
		cout << "Please Deposit $" << total << " ";
		cin >> deposit;
	
		if (deposit > total) {
			cout << "You have overpaid" << endl;
			cout << "Here is your change: $" << deposit - total << endl;
			money.depositAmount(deposit - (deposit - total));
		}
		else if (deposit < total) {
			int leftOver;
			cout << "You have underpaid" << endl;
			cout << "Pay $" << total - deposit;
			cin >> leftOver;
			deposit = leftOver + deposit;
			money.depositAmount(deposit);
		}
		else if (deposit == total) {
			money.depositAmount(deposit);
		}
		if (deposit == total) {
			for (int i = 0; i < 6; i++) {
				switch(selection[i]) {
				case 1:
					appleJuice.releaseItem(1);
					break;
				case 2:
					orangeJuice.releaseItem(1);
					break;
				case 3:
					mangoLassi.releaseItem(1);
					break;
				case 4:
					fruitJuice.releaseItem(1);
				}
			}
		}
		cout << "Drinks Released. Enjoy your drink(s)!" << endl;

	}
}