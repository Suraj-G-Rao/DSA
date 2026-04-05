#include<iostream>
using namespace std;
bool Binary_Search(int *arr,int s , int e,int key){

   if(s>e)           return false;
   int mid = s+ (e-s)/2;
   if(arr[mid]==key) return true;

   if(arr[mid]<key)  return Binary_Search(arr,mid+1,e,key);
   else              return Binary_Search(arr,s,mid-1,key);
 
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

    if(Binary_Search(arr,0,n,key)) cout<<"Yes Element is present in the Array  "<<endl;
    else                 cout<<"No Element found in the Array "<<endl;

    return 0;
}
