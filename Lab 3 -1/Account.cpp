//
//  Account.cpp
//  Lab3
//
//  Created by Vishwa Shah on 9/15/21.
//

#include <stdio.h>
#include "Account.h"
#include <iostream>
#include <ostream>
using namespace std;

Account::Account(double balance) {
    this->balance = balance;
}

void Account::setBalance(double balance) {
    this->balance = balance;
}

double Account::getBalance() {
    return balance;
}

void Account::credit(double crd) {
    balance += crd;
}

bool Account::debit(double db) {
    if (db < 0) {
        return false;
    }
    balance -= db;
    return true;
}

ostream& operator<< (ostream& out, Account& x)
{
    out << x.getBalance();
    return out;                            // and return the ostream
}



