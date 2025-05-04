#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int get_beautiful_year(int year){

    string y=to_string(year);
    set<char>year_set;

    for (char ch:y){
        if(year_set.count(ch)){
            return 0;
        }
        year_set.insert(ch);
    }

    return 1;
}

int main() {
    int year;
    std::cin>>year;
    while(true){
        year++;
        if (get_beautiful_year(year) == 1){
            std::cout<<year<<endl;
            break;
        }
    }
}