#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >>N>>Q;
    vector<int>v;
    for(int i=0; i<N; i++){
        int val;
        cin>>val;
        v.push_back(val);
    }

    for(int i=0; i<Q; i++){
        int start, end, sum=0;
        cin>>start>>end;
        for(int j=start-1; j<end; j++){
            sum+=v[j];
        }
        cout<<sum<<endl;
    }
    
    return 0;
}