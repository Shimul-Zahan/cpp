#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    for(int i=0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i=0, j=n-1; i<n; i++, j--){
        arr2[i] = arr[j];
    }

    for (int i=0; i<n; i++){
        cout << arr2[i] << " ";
    }
    
    return 0;
}