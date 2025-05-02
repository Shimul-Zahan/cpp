#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    int i=0;
    int j=n-1;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    while(i<j){
        std::swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for(int i=0; i<n; i++){
        std::cout << arr[i] << " ";
    }

    return 0;
}