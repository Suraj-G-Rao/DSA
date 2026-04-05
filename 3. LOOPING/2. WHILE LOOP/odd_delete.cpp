#include<iostream>
using namespace std;
int main(){
    int pos=1 ,n,i=1;
    cin>>n;
    while(i*2<=n){
        pos*=2;
        i=pos;
    }
    cout<<pos;


    return 0;
}