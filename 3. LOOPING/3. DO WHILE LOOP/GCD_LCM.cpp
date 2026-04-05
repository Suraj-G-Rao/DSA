#include<iostream>
using namespace std;
int main(){
    int a,p,q,m,n,gcd,lcm;
    cin>>m>>n;
    p=m;q=n;
    do{
        a=m%n;
        m=n;
        n=a;
    }
    while(n!=0);
    gcd=m;
    lcm=(p*q)/gcd;
    cout<<gcd<<endl<<lcm;

    return 0;
}