#include <iostream>
#include <bits/stdc++.h>
#include<set>
#include <string>
using namespace std;

bool checkDistinct(int year){
    string y = to_string(year);
    set<char> digits;
    for(char c:y){
        if(digits.count(c))return false;
        digits.insert(c);
    }
    return true;
}

int main() {
    int year;
    cin>>year;
    cout<<(checkDistinct(year) ? "Distinct" : "Not Distinct")<<endl;
    return 0;
}