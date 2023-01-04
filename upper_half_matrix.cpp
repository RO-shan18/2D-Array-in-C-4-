/* Programmer =  Roshan Mehra
Purpose = Q1 - Write a user defined function upper() which takes an integer square matrix as an input and
its size N and prints the upper half of the matrix.
Date = 01/12/2022  */

#include<iostream>
#include<vector>
using namespace std;
/*
n = 3
input = [{1,2,3}
         {4,5,6}
         {7,8,9}]
i=2, j=2

output = [1 2 3
            5 6
              9]
*/
void  Printuppermatrix(vector<vector<int>> &v){

    for(int i=0; i<v.size(); i++){

        for(int j=0; j<v[i].size(); j++){
            if(j>=i){
                cout<<v[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;

    vector<vector<int>> ans(n, vector<int> (n));

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){
            cin>>ans[i][j];
        }
    }

   Printuppermatrix(ans);
    return 0;
}