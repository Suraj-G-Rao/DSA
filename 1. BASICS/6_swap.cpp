//TO SWAP TWO NUMBERS

/*
SAMPLE INPUT:
a:4
b:6 

SAMPLE OUTPUT:
a:6
b:4
*/
#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    // temp=a;
    // a=b;
    // b=temp;
    swap(a,b);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    return 0;
}