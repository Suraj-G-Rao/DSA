#include<iostream>
using namespace std;
int f=1,i,c;

int fact(int n){
    for(i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

int combination(int n , int r){
    c= fact(n)/(fact(r)*fact(n-r));
    return c;
}

int main(){
    int n,r,ncr;
    cin>>n>>r;
    ncr=combination(n,r);
    cout<<ncr;
    return 0;
}