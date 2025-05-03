#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int row, columns;
    cin>>row>>columns;
    vector<vector<int>>matrix(row, vector<int>(columns));

    for(int i=0; i<row; i++){
        for(int j=0; j<columns; j++){
            std::cin>>matrix[i][j];
        }
        // cout<<endl;
    }


    for(int i=0; i<row; i++){
        for(int j=0; j<columns; j++){
            std::cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}