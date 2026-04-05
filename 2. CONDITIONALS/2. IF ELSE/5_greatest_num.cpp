#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the values for a, b, c:";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" is greatest number.";
    }
     if(b>a && b>c){
        cout<<b<<" is greatest number.";
    }
    else{
        cout<<c<<" is greatest number.";

    }
    


    return 0;
}