#include<iostream>
using namespace std;

int main(){
    string word;
    cin>>word;
    int upper_len = 0;
    for (char c:word){
        if(isupper(c)) upper_len++;
    }
    int lower_len = word.length() - upper_len;
    for(char &c:word){
        c = (upper_len > lower_len) ? toupper(c) : tolower(c);
    }

    cout << word <<endl;
}