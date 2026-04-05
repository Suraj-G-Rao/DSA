/*

GCD OF A AND B

SAMPLE INPUT  :  A=12 B=5
SAMPLE OUTPUT :  1

SAMPLE INPUT  :  N=20 K=10
SAMPLE OUTPUT :  10

*/
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;

    (a>b) ? a%=b : b%=a; 

    return gcd(a,b);
}
int main(){

    int a,b;
    cout<<"Enter a and b values : ";
    cin>>a>>b;
    cout<<"Gcd Of "<<a<<" and "<<b<<" : "<<gcd(a,b);



    return 0;
}