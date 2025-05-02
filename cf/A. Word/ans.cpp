#include<iostream>
using namespace std;

int main(){
    string word;
    cin>>word;
    int uppercase = 0;
    int lowecase = 0;
    for(char c: word){
        if (isupper(c)){
            uppercase += 1;
        }else{
            lowecase += 1;
        }
    }
    if (uppercase > lowecase){
        for(int i=0; i<word.length(); i++){
            word[i] = toupper(word[i]);
        }
    }else{
        for(int i=0; i<word.length(); i++){
            word[i] = tolower(word[i]);
        }
    }
    cout<<word<<endl;
}