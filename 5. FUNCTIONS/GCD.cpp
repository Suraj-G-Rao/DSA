#include<iostream>
using namespace std;

int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a,int b){
    int gcd;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            gcd=i;
            break;
        }
    }
    return gcd;
}
int main(){
    int a,b,c;
    cout<<"Enter the values of a and b :"<<endl;
    cin>>a>>b;
    c=gcd(a,b);
    cout<<"GCD of a and b is "<<c<<endl;



    return 0;
}