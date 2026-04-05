// #include<iostream>
// using namespace std;
// bool Linear_Search(int *arr , int n,int key){

//     if(n==0) return false;

//     if(arr[n-1]==key) return true;
//     else              return Linear_Search(arr,n-1,key);

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
//     int key;
//     cout<<"Enter The Key Element To be Searched ";
//     cin>>key;

//     if(Linear_Search(arr,n,key)) cout<<"Yes Element is present in the Array  "<<endl;
//     else                 cout<<"No Element found in the Array "<<endl;

//     return 0;
// }
#include<iostream>
using namespace std;
bool Linear_Search(int *arr , int n,int key){

    if(n==0) return false;

    if(arr[0]==key)   return true;
    else              return Linear_Search(arr+1,n-1,key);

}
bool linear_search(int *arr, int n,int i , int key){

    if(i==n) return false;

    return (arr[i]==key)|| linear_search(arr,n,i+1,key);
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
    int key;
    cout<<"Enter The Key Element To be Searched ";
    cin>>key;

    if(Linear_Search(arr,n,key)) cout<<"Yes Element is present in the Array  "<<endl;
    else                 cout<<"No Element found in the Array "<<endl;

    if(linear_search(arr,n,0,key)) cout<<"Yes Element is present in the Array  "<<endl;
    else                 cout<<"No Element found in the Array "<<endl;

    return 0;
}
