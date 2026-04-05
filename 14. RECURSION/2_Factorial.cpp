#include<iostream>
using namespace std;
int fact(int n){
    if(n==0) return 1;

    return n*fact(n-1);
}
int main(){

    int n;
    cout<<"Enter The Number : ";
    cin>>n;

    cout<<"Factorial of "<<n <<" is : "<<fact(n);


    return 0;
}