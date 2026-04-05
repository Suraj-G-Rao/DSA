#include<iostream>
using namespace std;
int sum_of_digits(int n){

    if(n>=0 && n<=9)   return n;

    int d = n%10;
    n=n/10;

    return d+sum_of_digits(n);

}
int main(){

    int n;
    cout<<"Enter The Number : ";
    cin>>n;

    cout<<"Sum Of Digits : "<<sum_of_digits(n);


    return 0;
}