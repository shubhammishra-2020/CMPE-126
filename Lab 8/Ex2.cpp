#include <iostream>
#include <fstream>
#include <stack>
using namespace std;
int orderOfoperation(char c){
    if(c == '^'){
        return 3;
    }
    else if(c == '/' || c == '*'){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }
    else{
        return -1;
    }
}
void inFixtoPostfix (string s){
    stack <char> pfx;
    string result;

    for(int i = 0; i < s.length(); i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') ){
            result = result + s[i];
        }

        else if( s[i] == '(') {
            pfx.push(s[i]);
        }

        else if(s[i] == ')'){
            while(pfx.top() != '('){
                result = result + pfx.top();
                pfx.pop();
            }
            pfx.pop();
        }

        else{
            while(!pfx.empty() && orderOfoperation(s[i]) <= orderOfoperation(pfx.top())){
                if(s[i] == '^' && pfx.top() == '^'){
                    break;
                }else{
                    result = result + pfx.top();
                    pfx.pop();
                }
            }
            pfx.push(s[i]);
        }
    }

    while(!pfx.empty()){
        result = result + pfx.top();
        pfx.pop();
    }
    cout << result << endl;
}

int main() {
    string infx;
    infx = "A+B-C";
    inFixtoPostfix(infx);

    infx = "(A+B)*C";
    inFixtoPostfix(infx);

    infx = "(A+B)*(C+D)";
    inFixtoPostfix(infx);

    infx = "A+((B+C)*(E+F)-G)/(H-I)";
    inFixtoPostfix(infx);

    infx = "A+B*(C+D)-E/F*G+H";
    inFixtoPostfix(infx);




    return 0;
}
