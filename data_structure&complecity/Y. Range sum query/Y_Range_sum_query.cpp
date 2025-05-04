// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N, Q;
//     cin >> N >> Q;

//     vector<long long int> arr(N+1);
//     vector<long long int> pre(N+1);

//     for (int i = 1; i <= N; i++) {
//         cin >> arr[i];
//     }

//     pre[1]=arr[1];

//     for (int i = 2; i <= N; i++) {
//         pre[i] = pre[i - 1] + arr[i];
//     }

//     for (int i = 1; i <= Q; i++) {
//         int start, end;
//         long long int sum;
//         cin >> start >> end;
//         sum = pre[end] - pre[start - 1];
//         cout << sum<< endl;
//     }

//     return 0;
// }


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<long long int> v(N + 1, 0);
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        int val;
        cin >> val;
        sum += val;
        v[i] = sum;
    }

    for (int i = 1; i <= Q; i++)
    {
        int start, end;
        cin >> start >> end;
        long long int sum = 0;
        sum = v[end] - v[start - 1];
        cout<<sum<<endl;
    }

    return 0;
}

