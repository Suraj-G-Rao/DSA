#include<iostream>
#include<array>
using namespace std;
int main(){

    int b[]={1,2,3,4,5};
    array <int,4> a = {6,7,8,9};  // BOTH 'b' AND 'a' ARE STATIC ARRAY

    cout<<"Sorted Array --> ";
    for(int i=0 ; i<a.size() ; i++) cout<<a[i]<<" ";

    int size=a.size();
    cout<<"Is array Empty 1(True) 0(False) --> "<<a.empty()<<endl;

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at index 1 --> "<<a.at(1)<<endl;
    
    cout<<"Array is Empty or Not --> "<<a.empty()<<endl;

    cout<<"First Element --> "<<a.front()<<endl;

    cout<<"Last Element --> "<<a.back()<<endl;


    return 0;
}