#include<iostream>
using namespace std;
bool is_Sorted(int *arr , int n){

    if(n==0 || n==1 ) return true;

    if(arr[n-1]<arr[n-2]) return false;

    return is_Sorted(arr,n-1);

}
int main(){

    int n;
    cout<<"Enter The number of elements : ";
    cin>>n;

    int * arr = new int[n];
    cout<<"Enter The Array Elements : ";
    for(int i=0 ;i<n ;i++){
        cin>>arr[i];
    }

    if(is_Sorted(arr,n)) cout<<"Yes Array Is Sorted "<<endl;
    else                 cout<<"No Array is Not Sorted"<<endl;

    return 0;
}
// #include<iostream>
// using namespace std;
// bool is_Sorted(int *arr , int n){

//     if(n==0 || n==1 ) return true;

//     if(arr[0]>arr[1]) return false;

//     return is_Sorted(arr+1,n-1);

// }
// int main(){

//     int n;
//     cout<<"Enter The number of elements : ";
//     cin>>n;

//     int * arr = new int[n];
//     cout<<"Enter The Array Elements : ";
//     for(int i=0 ;i<n ;i++){
//         cin>>arr[i];
//     }

//     if(is_Sorted(arr,n)) cout<<"Yes Array Is Sorted "<<endl;
//     else                 cout<<"No Array is Not Sorted"<<endl;




//     return 0;
// }