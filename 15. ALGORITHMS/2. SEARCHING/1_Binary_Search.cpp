#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int>& v , int k){

    int s=0 , e=v.size()-1;
    int mid = s+(e-s)/2;

    while(s<=e){

        if(v[mid]==k) return mid;

        else if(v[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
    return -1;
}
int main(){

    int n ;
    cout<<"Enter The Size Of The array : ";
    cin>>n;
    vector<int> v(n);

    cout<<"Enter The Array Elements in sorted order : ";
    for(int i=0 ; i<n ;i++) cin>>v[i];

    int key;
    cout<<"Enter The key element to be searched : ";
    cin>>key;

    int a = binary_search(v,key);
    if(a!=-1){
        cout<<"The Element "<<key<<" is found at index : "<<a<<endl;
    }
    else cout<<"Key Not Found "<<endl;


    return 0;
}