#include<iostream>
using namespace std;
int main(){
    int n,sum ,pro, t;
    sum=0;
    pro=1;
    cin>>n;
    while(n>0){
        sum+=n%10;
        pro*=n%10;
        n=n/10;
    }
    cout<<pro-sum<<endl;

    return 0;
}