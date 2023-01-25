#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>>&matrix,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}
/*
1   2   3       1   4   7
4   5   6       2   5   8
7   8   9       3   6   9
*/

int main(){
    int n;
    cout<<"Enter the size of matrix:-";
    cin>>n;
    vector<vector<int>> matrix(n);
    cout<<"Enter elements of matrix:-\n";
    for(int i=0;i<n;i++){
        matrix[i].assign(n,0);
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Given matrix is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    transpose(matrix,n);
    cout<<"The transpose of the given matrix is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}