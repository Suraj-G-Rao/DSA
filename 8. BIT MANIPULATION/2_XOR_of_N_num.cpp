// GIVEN 'n' FIND 1^2^3^4^........^n --> WITH TIME COMPLEITY O(1)

#include<iostream>
using namespace std;
int XOR_num(int n){
    if(n%4==0)       return n;
    else if(n%4==1)  return 1;
    else if(n%4==2)  return n-1;
    else if(n%4==3)  return 0;
}
int main(){

    int n;
    cout<<"Enter The Number : ";
    cin>>n;

    

    cout<<"The Value of n XOR ele is = "<<XOR_num(n)<<endl;
    cout<<"Value Using Manual Method = "<<(1^2^3^4^5^6^7^8^9);

    return 0;
}