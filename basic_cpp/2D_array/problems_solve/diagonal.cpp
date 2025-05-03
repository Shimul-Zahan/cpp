#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    // int N, N;
    // cin>>N>>N;
    vector<vector<int>>matrix(N, vector<int>(N));

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            std::cin>>matrix[i][j];
        }
        // cout<<endl;
    }

    // check for sec diagonals
    // for(int i=0; i<N; i++){
    //     for(int j=0; j<N; j++){
    //         if(i+j == N-1 ){
    //             cout<<matrix[i][j];
    //         }
    //     }
    //     // cout<<endl;
    // }



    int primary_diagona=0, sec_diagonal=0;

    // for(int i=0; i<N; i++){
    //     for(int j=0; j<N; j++){
    //         if(i==j){
    //             primary_diagona += matrix[i][j];
    //         }
    //         if(i+j == N-1 ){
    //             sec_diagonal += matrix[i][j];
    //         }
    //     }
    // }

    for(int i=0; i<N; i++){
        primary_diagona += matrix[i][i];
        sec_diagonal += matrix[i][N-1-i];
    }

    cout<<abs(primary_diagona - sec_diagonal)<<endl;

    return 0;
}