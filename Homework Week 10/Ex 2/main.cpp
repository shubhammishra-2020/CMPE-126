#include <iostream>
#include "queueasArray.h"
#include <string>
#include <stack>
using namespace std;
void convertLower(string& s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
}
bool palindrome(string t, int start, int end) {
    if (end - start == 1 || start == end) {
        return 1;
    }

    else {
        if (t[start] == t[end]) {
            return palindrome(t, start + 1, end - 1);
        }

        else {
            return 0;
        }
    }
}
int main() {
    string text;
    int size;
    cout << "Enter a string" << endl;
    cin >> text;
    convertLower(text);

    size = text.length();
    queueType <string> pal;
    pal.addQueue(text);

    stack <string> test;
    test.push(text);

    if (palindrome(text, 0, size - 1)) {
        cout << "It is a palindrome";
    }

    else {
        cout << "It isn't a palindrome";
    }
    return 0;
}