#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};

    a.insert(a.end(), b.begin(), b.end());

    for(int val:a){
        cout << val << " ";
    }

    return 0;
}