#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Main function template
int main() {
    stack<int>st;
    stack<int>st2;
    int n;
    cin>>n;
    int new_val;
    cin>>new_val;
    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        st.push(val);
    }

    while(!st.empty()){
        st2.push(st.top());
        st.pop();
    }

    st.push(new_val);

    while(!st2.empty()){
        st.push(st2.top());
        st2.pop();
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}