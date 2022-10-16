#include <iostream>
#include "myStack.h"
using namespace std;

template <class Type>
void stackType <Type> ::moveFront(int num) {
    int temp = top();
    pop();
    int temp1 = list[num];
    list[num] = temp;
    push(temp1);

}
int main() {
    stackType<int> rand;
    int n;
    rand.push(25);
    rand.push(13);
    rand.push(1);
    rand.push(3);
    rand.push(5);
    rand.push(90);
    rand.push(112);
    rand.push(69);
    rand.push(101);
    rand.push(139);

    cout << "Enter n: " << endl;
    cin >> n;
    rand.moveFront(n);

    while(!rand.isEmptyStack()) {
        if (rand.isEmptyStack()) {
            exit(0);
        } else {
            cout << rand.top() << " ";
            rand.pop();
        }
    }





    return 0;
}
