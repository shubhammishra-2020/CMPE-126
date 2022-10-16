#include <iostream>
#include <string>
#include <stack>
#include <math.h>
using namespace std;

int main() {
    string input;
    int pos = 0;
    stack <int> decimalNum;
    double n = 0;

    cout << "Enter a number:"<< endl;
    cin >> input;

    string :: iterator it = input.begin();

    while(*it !=  '.' && it != input.end()){
        decimalNum.push(*it - 48);
        it++;
        pos += 1;
    }

    for(int i=0; i < pos; i++){
        n = n + (decimalNum.top() * pow(10,i));
        decimalNum.pop();
    }

    pos = -1;
    if(it != input.end()){
        it++;
    }

    while(it!= input.end()){
        n = n + ((*it - 48) * pow(10,pos));
        pos = pos - 1;
        it++;
    }

    cout << n;
    return 0;
}
