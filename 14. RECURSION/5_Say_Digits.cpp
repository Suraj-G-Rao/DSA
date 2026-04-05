#include<iostream>
using namespace std;
void digits(int n, string arr[]){

    if(n==0)   return;

    int d = n%10;
    n=n/10;

    digits(n,arr);

    cout<<arr[d]<<" ";
}
int main(){

    string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"Enter The Number : ";
    cin>>n;

    digits(n,arr);


    return 0;
}