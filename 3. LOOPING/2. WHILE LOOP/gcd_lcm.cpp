#include<iostream>
using namespace std;
int main(){
    int a,p,q,m,n,gcd,lcm;
    cin>>m>>n;
    p=m;q=n;
    while(n!=0){
        a=m%n;
        m=n;
        n=a;
    }
    gcd=m;
    lcm=(p*q)/gcd;
    cout<<gcd<<endl<<lcm;

    return 0;
}