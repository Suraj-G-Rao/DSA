/*
The problem is to count all the possible paths on an m x n grid 
from top left (grid[0][0]) to bottom right (grid[m-1][n-1]).

Having constraints that from each cell you can either move only to right or down.



SAMPLE INPUT  : m = 2 ,n=3
SAMPLE OUTPUT : 3

SAMPLE INPUT  : m = 3 ,n=3
SAMPLE OUTPUT : 6

EXPLANATION :

            START
     M =  [ 0,0  0,1  0,2
            1,0  1,1  1,2 ]
                      END

    1ST --> 0,0 - 0,1 - 0,2 - 1,2
    2nd --> 0,0 - 0,1 - 1,1 - 1,2
    3rd --> 0,0 - 1,0 - 1,1 - 1,2

    TOTAL 3 WAYS TO REACH END 


*/
#include<iostream>
using namespace std;
int count=0;
int grid_paths(int i,int j,int n, int m){

    if(i==n-1 && j==m-1)   return 1;
    if(i>n || j>m)         return 0;

    return grid_paths(i+1,j,n,m) + grid_paths(i,j+1,n,m);
}
void grid_path(int i,int j,int n, int m){

    if(i==n-1 && j==m-1)   count++;
    if(i>n || j>m)         return ;

    grid_path(i+1,j,n,m);
    grid_path(i,j+1,n,m);

}
int main(){

    int n,m;
    cout<<"Enter The Size of rows and col : ";
    cin>>n>>m;

    // int **arr = new int* [n];

    // for(int i=0 ;i<n ;i++){
    //     arr[i] = new int[m];
    // }

    // cout<<"Enter The Array elements : ";

    // for(int i=0 ; i<n ;i++){
    //     for(int j=0 ; j<m ;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    cout<<"No. OF paths : "<<grid_paths(0,0,n,m)<<endl;
    grid_path(0,0,n,m);
    cout<<"No. OF paths : "<<count<<endl;

    //  //releasing memory
    // for(int i=0; i<n; i++) {
    //     delete [] arr[i];
    // }   

    // delete []arr;
    // return 0;





    return 0;
}