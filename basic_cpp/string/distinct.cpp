#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s = "Shimmul";
    set<char> words;

    for(int i=0; i<s.length(); i++){
        if(words.count(s[i])){
            cout<<false<<endl;
            // return;
            break;
        }
        words.insert(s[i]);
    }
    cout<<true<<endl;

    return 0;
}