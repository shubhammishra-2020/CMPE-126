#include <iostream>
using namespace std;


void exerciseOne();
void exerciseTwo();
void exerciseThree();

int main() {
	int option = 0;
	while (option != 4) {
		cout << "1. Enter Exercise 1" << endl;
		cout << "2. Enter Exercise 2" << endl;
		cout << "3. Enter Exercise 3" << endl;
		cout << "4. Exit" << endl;

		cin >> option;

		if (option == 1) {
			exerciseOne();
		}
		else if (option == 2) {
			exerciseTwo();
		}

		else if (option == 3) {
			exerciseThree();
		}
	}
}
