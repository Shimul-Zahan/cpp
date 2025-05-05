#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    // Input loop
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Output loop
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Your code starts here
    

    return 0;
}