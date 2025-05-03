#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void recursive_fucn(int number){
    if(number == 10) return;

    cout << "here is the number " << number <<" before recursion" << endl;

    recursive_fucn(number + 1);

    cout << "here is the number " << number <<" after recursion" << endl;

}


int main() {
    int n;
    cout<<"Enter a number to check"<<endl;
    cin >> n;
    recursive_fucn(n);
    return 0;
}