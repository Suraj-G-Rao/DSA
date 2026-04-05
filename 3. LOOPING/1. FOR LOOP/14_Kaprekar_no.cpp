#include<iostream>
using namespace std;
int main(){
    int n,i=1,f=1,temp,a,e;
    cin>>n;
    a=n*n;
    temp=n;
    while(n!=0){
        n=n/10;
        f=f*10;
    }
    e=(a%f)+(a/f);
    if(e==temp)      cout<<"Kaprekar no.";
    else             cout<<"not Kaprekar  no.";
    return 0;
}