#include<iostream>
using namespace std;
int main(){
    int a[100],n,key;
    bool b=true;

    cout<<"Enter The number of elements in the array :"<<endl;
    cin>>n;

    cout<<"Enter The elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter The Key elements to be searched in the array";
    cin>>key;

    for(int i=0;i<=n;i++){
        if(a[i]==key){
            b==false;
            cout<<"The element is found in the array at index "<<i<<endl;
            break;
        }
    }
    if(b==false){
        cout<<"The element is not found in the array .";
    }


    return 0;
}