//TO CHECK THE MAXIMUM OF 3 NUMBERS

// SAMPLE INPUT --> 38 23 46

// SAMPLE OUTPUT --> 46 is greater

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is greater";
        }else{
            cout<<c<<" is greater";
        }
    }else{
        if(b>c){
            cout<<b<<" is greater";
        }else{
            cout<<c<<" is greater";
        }
    }
    return 0;
}