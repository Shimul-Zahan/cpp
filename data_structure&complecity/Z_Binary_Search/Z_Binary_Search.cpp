// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, q;
//     cin >> n>>q;
//     vector<int> arr(n);

//     // Input loop
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }

//     // Output loop
//     for (int i = 0; i < q; ++i) {
//         int query;
//         cin>>query;
//         bool found = false;
//         for(int j=0; j<arr.size(); j++){
//             if(arr[j] == query){
//                 cout<<"found"<<endl;
//                 found=true;
//                 break;
//             }
//         }
//         if (!found) {
//             cout << "not found" << endl;
//         }
//     }
//     return 0;
// }


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n>>q;
    vector<int> arr(n);

    // Input loop
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < q; ++i) {
        int query;
        cin>>query;
        int l = 0, r = n-1;
        bool flag = false;
        while(l<=r){
            int mid = (l+r) / 2;
            if(arr[mid] == query){
                flag = true;
                break;
            }else if(query > arr[mid]){
                l = mid + 1;
            }else{
                r = mid-1;
            }
        }
        if(flag){
            cout<<"found"<<endl;
        }else{
            cout<<"not found"<<endl;
        }
    }
    return 0;
}