#include <iostream>
using namespace std;


// in this problems we want to take big steps and cover the full distance in short

int main() {
    int n;
    cin>>n;
    
    int step = n / 5;
    if (n % 5 != 0){
        step += 1;
    }
    cout <<step<<endl;
    

    return 0;
}