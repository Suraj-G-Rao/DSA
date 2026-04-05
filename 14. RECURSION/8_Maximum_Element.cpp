#include<iostream>
using namespace std;
int maximum_element(int *arr , int idx , int n){
    if(n==0){
        cout<<"No Elements"<<endl;
        exit(0);
    }
    if(idx==n-1) return arr[idx];

    return max(arr[idx],maximum_element(arr,idx+1,n));
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
    cout<<"Maximum Element is : "<<maximum_element(arr,0,n);

    return 0;
}