#include<iostream>
using namespace std;
void print(int *arr , int idx , int n){
    if(n==0){
        cout<<"No Elements"<<endl;
        return;
    }
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    print(arr,idx+1,n);
}
void print(int *arr,int n){
    if(n==0)  return;
    print(arr,n-1);
    cout<<arr[n-1]<<" ";
}
int main(){

    int n;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    int* arr = new int[n];

    cout<<"Enter The Array Elements : ";
    for(int i=0 ; i<n ;i++){
        cin>>arr[i];
    }
    cout<<"Array Elements : ";
    print(arr,0,n);

    return 0;
}