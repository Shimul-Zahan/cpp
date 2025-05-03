#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, num;
    cin>>n>>k;
    
    if(k<=(n+1)/2){
        cout<<(k*2-1);
    }else{
        cout<<(2*(k-(n+1)/2));
    }
}