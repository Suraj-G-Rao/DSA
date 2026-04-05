/*

PROBLEM : FIND A,B,C WHERE  A*B*C = N  &  A != B != C != 1 

SAMPLE INPUT  :  N= 64
SAMPLE OUTPUT :  A=2  , B=4  , C=8

SAMPLE INPUT  :  N=8
SAMPLE OUTPUT :  NO FACTORS (SINCE 1 CANNOT BE A FACTOR)
*/

#include<iostream>
using namespace std;
int minimum_factor(int n,int a){
    
    for(int i=2 ; i*i<=n ; i++){
        if( n%i == 0 && i!=a)   return i;
    }
    return 0;
}
int main(){

    int n,a,b,c,d,e,f;
    cout<<"Enter The Number : ";
    cin>>n;
    
    d=minimum_factor(n,1);
    if(d!=0)  a=d;
    else{
        cout<<"NO FACTORS"<<endl;
        exit(0);
    }

    e=minimum_factor((n/a),a);
    if(e!=0)  b=e;
    else{
        cout<<"NO FACTORS"<<endl;
        exit(0);
    }

    f=n/(a*b);
    if(f!=1)  c=f;
    else{
        cout<<"NO FACTORS"<<endl;
        exit(0);
    }

    cout<<"Factors : a = "<<a<<" b = "<<b<<" c = "<<c<<endl;

    return 0;
}