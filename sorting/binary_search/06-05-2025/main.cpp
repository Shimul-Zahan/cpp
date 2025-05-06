#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int recursive_bs(const vector<int> &arr, int l, int r, int query)
{
    if (l > r) return -1;
    int mid = (l + r) / 2;
    if (arr[mid] == query)
    {
        return mid;
    }
    else if (arr[mid] > query)
    {
        return recursive_bs (arr, l, mid - 1, query);
    }
    else{
        return recursive_bs (arr, mid+1, r, query);
    }
}

int binary_sort(const vector<int> &arr, int query)
{
    int l = 0, r = arr.size() - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == query)
        {
            return mid;
        }
        else if (arr[mid] > query)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);

    // Input loop
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    // Output loop
    for (int i = 0; i < q; ++i)
    {
        int query;
        cin >> query;
        // int index = binary_sort(arr, query);
        int index = recursive_bs(arr, 0, n - 1, query);
        cout << index << endl;
    }
}