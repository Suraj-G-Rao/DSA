#include<iostream>
using namespace std;
int main(){
    int n,temp,num,digit=0,ld,a;
    cin>>n;
    temp=n;
    num=n;
    // while(n!=0){
    //    digit++;
    //     n=n/10;
    // }
    // if(digit==3){
    //     temp=temp/10;
    //     ld=temp%10;
    //     a=ld%3;
    //     if(a==0)
    //         cout<<num<<" is a trendy no.";
    //     else
    //         cout<<num<<" is not a trendy no."; 
    // }
    // else
    //     cout<<num<<" is not a trendy no.";
    

    // ALTERNATE METHOD
    
    if(n>99 && n<1000){
        n=n/10;
        ld=n%10;
        a=ld%3;
        if(a==0)
            cout<<num<<" is a trendy no.";
        else
            cout<<num<<" is not a trendy no."; 
    }
    else
        cout<<num<<" is not a trendy no.";
    
    return 0;
}