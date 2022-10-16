#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

bool palindrome(string t, int start, int end){
    if(end -start == 1 || start == end){
        return 1;
    }

    else{
        if(t[start] == t[end]){
            return palindrome(t,start + 1, end -1);
        }

        else{
            return 0;
        }
    }
}
int main() {
    string line;
    cout << "Enter text: " << endl;
    getline(cin,line);

    for(int i=0; i<line.length();i++){
        line[i] = tolower(line[i]);
    }

    cout << "The text in lowercase is: "<< line << endl;
    stack<string> lowerStack;
    lowerStack.push(line);

    queue<string> lowerQueue;
    lowerQueue.push(line);

    int sizeofString = line.length();

    if(palindrome(line,0,sizeofString-1) == 1){
        cout << "This is a palindrome" << endl;
    }

    else{
        cout << "Not a palindrome" << endl;
    }

}
