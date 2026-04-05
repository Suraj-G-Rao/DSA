#include<iostream>
using namespace std;
int main(){
    int n,m ;
    cout<<"Enter The Row And Column Size : ";
    cin>>n>>m;

    int** arr = new int*[n];

    for(int i=0 ;i<n  ;i++){
        arr[i] = new int[m];
    }

    cout<<"Enter The Array Elements : ";

    for(int i=0 ;i<n ;i++){
        for(int j=0;j<m ;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0 ;i<n ;i++){
        for(int j=0;j<m ;j++){
            cout<<arr[i][j]<<" ";
        }
    }

     //releasing memory
    for(int i=0; i<n; i++) {
        delete [] arr[i];
    }   

    delete []arr;
    return 0;
}