#include <iostream>
#include <fstream>
#include <map>
using namespace std;
/* File Contents :
 * car do
*/
int main() {
    string word;
    string wordArr[3];


    map<char,string> contents;
    ifstream file;
    file.open("textfile.txt");

    while(!file.eof()){
        getline(file,word,' ');
        wordArr->push_back(word[0]);

    }



    for(int i=0; i<wordArr->length();i++){
        if(word[0] == word[i]){
            if(isspace(word[i-1])){
                contents.insert({word[1],word[i-1]});
            }
        }
    }
    file.close();

    return 0;
}


