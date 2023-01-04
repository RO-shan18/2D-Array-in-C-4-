/* Programmer =  Roshan Mehra
Purpose = Q2 - A square matrix is said to be an perfect Matrix if both of the following conditions hold:
a) All the elements in the diagonals of the matrix are non-zero integers.
b) All other elements except the diagonal elements are 0.
Given a 2D integer array grid of size n x n representing a square matrix, return true if grid
is a perfect matrix. Otherwise, return false using functions.
Date = 01/12/2022  */

#include<iostream>
#include<vector>
using namespace std;

bool Perfectmatrix(vector<vector<int>> &matrix){
    int count = 0;
    for(int i=0; i<matrix.size(); i++){

        for(int j=0; j<matrix[i].size(); j++){

            if((i==j || i+j==matrix.size()-1)){
                
                if(matrix[i][j]>0){
                    count++;
                }
            }
            else if(matrix[i][j] == 0){
                count++;
            }
        }
    }

    if(count == matrix.size()*matrix.size()){
        return true;
    }
    else{
      return false;
    }
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>> matrix(n, vector<int> (n));
    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }

    bool store = Perfectmatrix(matrix);
    cout<<store;
    return 0;
}