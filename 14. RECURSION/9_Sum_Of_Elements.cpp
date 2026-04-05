#include<iostream>
using namespace std;
int Sum_Of_Elements(int *arr ,  int n){
    if(n==0)  return 0;
    if(n==1) return arr[0];
    
    // int ans =0;

    return arr[n-1]+Sum_Of_Elements(arr,n-1);
}
// int Sum_Of_Elements(int *arr ,  int n){
//     if(n==0)  return 0;
//     if(n==1) return arr[0];

//     return arr[0]+Sum_Of_Elements(arr+1,n-1);
// }
int main(){

    int n;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    int* arr = new int[n];

    cout<<"Enter The Array Elements : ";
    for(int i=0 ; i<n ;i++){
        cin>>arr[i];
    }
    cout<<"Sum Of Elements is : "<<Sum_Of_Elements(arr,n);

    return 0;
}
// #include<iostream>
// using namespace std;
// int Sum_Of_Elements(int *arr , int idx , int n){
//     if(n==0){
//         cout<<"No Elements"<<endl;
//         exit(0);
//     }
//     if(idx==n-1) return arr[idx];

//     return arr[idx]+Sum_Of_Elements(arr,idx+1,n);
// }
// int main(){

//     int n;
//     cout<<"Enter The Number Of Elements : ";
//     cin>>n;
//     int* arr = new int[n];

//     cout<<"Enter The Array Elements : ";
//     for(int i=0 ; i<n ;i++){
//         cin>>arr[i];
//     }
//     cout<<"Sum Of Elements is : "<<Sum_Of_Elements(arr,0,n);

//     return 0;
// }