#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    int first = *vec.begin();
    // int last = *(vec.end() - 1);
    int last = vec.back();

    cout << first << endl;
    cout << last << endl;
    cout << *vec.begin() + 2 << endl;

    vector<int>::iterator it;
    for (it = vec.begin(); it < vec.end(); it++)
    {
        if (*it == 3)
        {
            *it = 10;
        }
    }

    for (it = vec.begin(); it < vec.end(); it++)
    {
        cout << *it << endl;
    }
}