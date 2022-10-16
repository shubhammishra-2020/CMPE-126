#include <iostream>
using namespace std;
#include <string>
#include <cstring>

string reverseOrder(string str){
    if(str.length() == 1){
        return str;
    }

    else{
        return reverseOrder(str.substr(1, str.length())) + str.at(0);
    }
}
int main() {
    string str;
    cout << "Enter a string: " << endl;
    cin >> str;
    cout << reverseOrder(str);

    return 0;
}

