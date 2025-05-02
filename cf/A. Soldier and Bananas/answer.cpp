#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    int total_cost = 0;
    cin >> k >> n >> w;
    for(int i=1; i<= w; i++){
        // n = n - (k * i);
        total_cost += (k * i);
    }
    int borrow = total_cost - n;
    if (borrow < 0) borrow = 0;
    std::cout << borrow << std::endl;
}