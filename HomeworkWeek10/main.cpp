#include <iostream>
#include "exerciseOne.h"
#include "exerciseTwo.h"
using namespace std;


int main() {
    int input = 0;
    cout << "What program would you like to run?" << endl;
    do {
        cout << "1 for Exercise 1" << endl;
        cout << "2 for Exercise 2" << endl;
        cout << "3 to exit \n";
        cin >> input;


        if (input == 1) {
            exerciseOne();
        } else if (input == 2) {
            //exerciseTwo();
        } else if (input == 3) {
            exit(0);
        }
    }while(input != 3);
}
