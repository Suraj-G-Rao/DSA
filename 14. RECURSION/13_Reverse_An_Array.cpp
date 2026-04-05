#include<iostream>
using namespace std;
void print(int *arr,int n){
    if(n==0)  return;
    print(arr,n-1);
    cout<<arr[n-1]<<" ";
}
void reverse_array(int* arr ,int i, int n){
    if(i>=n/2) return;

    swap(arr[i],arr[n-i-1]);
    reverse_array(arr,i+1,n);
}
// void reverse_array(int* arr ,int i, int n){
//     if(i>=n) return;

//     swap(arr[i],arr[n-1]);
//     reverse_array(arr,i+1,n-1);
// }
int main(){

    int n;
    cout<<"Enter The number of elements : ";
    cin>>n;

    int * arr = new int[n];
    cout<<"Enter The Array Elements : ";
    for(int i=0 ;i<n ;i++){
        cin>>arr[i];
    }

    cout<<"Array Before Reversing :";
    print(arr,n);
    cout<<endl;
    reverse_array(arr,0,n);
    cout<<"Array After Reversing :";
    print(arr,n);


    return 0;
}
