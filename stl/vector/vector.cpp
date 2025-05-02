#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    vector<int> array;
    // "any value here"
    vec.push_back(5); // for insert the value in the array or vector
    vec.pop_back();   // foremoving the element form the vector
    cout << "Size: " << vec.size() << endl;
    vec.front();        // for getting the first element in a vector
    vec.back();         // for getting the last element in a vector
    vec.resize(5);      // what is the size of the vector in my memory
    vec.assign(5, 100); // first the vec size and the value for it
    vec.clear();        // clear all the element in a vector

    return 0;
}