// GIVEN 's'&'n'FIND (s+1)^(s+2)^(s+3)^(s+4)^........^n --> WITH TIME COMPLEITY O(1)
// SAMPLE INPUT : n=4 s=2
// SAMPLE OUTPUT: 2^3^4= 5

#include<iostream>
using namespace std;
int XOR_num(int n){
    if(n%4==0)       return n;
    else if(n%4==1)  return 1;
    else if(n%4==2)  return n-1;
    else if(n%4==3)  return 0;
}
int XOR_btw_num(int n,int m){
    return XOR_num(m)^XOR_num(n);
}
int main(){

    int s,n;
    cout<<"Enter The Number value of s and n: ";
    cin>>s>>n;

    

    cout<<"The Value of n XOR ele is = "<<XOR_btw_num(s,n)<<endl;
    cout<<"Value using Manual Method = "<<(2^3^4^5^6^7);

    return 0;
}