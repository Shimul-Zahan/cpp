#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int total_sum(int index, int a[], int size){
    if (index == size) return 0;

    cout<<a[index]<<endl;

    return a[index]+total_sum(index+1, a, size);


}

int main() {
    int index = 0;
    int a[]={1,2,3,4,5,6};
    int size = sizeof(a) / sizeof(a[0]);
    int sum = total_sum(index, a, size);
    cout<<sum<<endl;
    return 0;
}