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
    vector<long long int> v(N + 1);
    vector<long long int> sum_array(N+1);

    for (int i=1; i<=N; i++){
        cin >>v[i];
    }
    sum_array[1] = v[1];
    for (int i=2; i<=N; i++){
        sum_array[i] = sum_array[i - 1] + v[i];
    }
    for (int i=1; i<=Q; i++){
        int l, r;
        cin>>l>>r;
        long long int sum = sum_array[r] - sum_array[l-1];
        cout<<sum<<endl;
    }
    return 0;
}

