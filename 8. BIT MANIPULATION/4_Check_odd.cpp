#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number : ";
    cin>>n;

    if(n&1){
        cout<<"The Number is Odd";
    }
    else{
        cout<<"The Number is Even";
    }


    return 0;
}