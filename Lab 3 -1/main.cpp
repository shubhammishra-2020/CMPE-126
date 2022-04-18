#include <iostream>
#include <vector>
using namespace std;
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

int main() {
	vector <Account*> accPtr(2);
	int option;
	double debit;
	double credit;

	accPtr[0] = new CheckingAccount(200, 5);
	accPtr[1] = new SavingsAccount(300, 5);

	cout << "What account number are you? ";
	cin >> option;

	option = option - 1;

	if (option == 0) {
		cout << "Your Balance is: " << accPtr[option]->getBalance() << endl;
		cout << "How much would you like to withdraw ";
		cin >> debit;

		cout << "How much would you like to deposit ";
		cin >> credit;

		if (debit > 0) {
			accPtr[option]->debit(debit);
		}
		if (credit > 0) {
			accPtr[option]->credit(credit);
		}
		cout << "Your balance is: " << accPtr[option]->getBalance();
	}

	else if (option == 1) {
		cout << "Your Balance is: " << accPtr[option]->getBalance() << endl;
		cout << "How much would you like to withdraw ";
		cin >> debit;
		cout << endl;

		cout << "How much would you like to deposit ";
		cin >> credit;
		cout << endl;

		if (debit > 0) {
			accPtr[option]->debit(debit);
		}
		if (credit > 0) {
			accPtr[option]->credit(credit);
		}

		cout << "Your balance is: " << accPtr[option]->getBalance();
	}
}


