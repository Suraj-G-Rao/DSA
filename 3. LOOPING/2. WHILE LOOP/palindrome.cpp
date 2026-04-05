#include<iostream>
using namespace std;
int main(){
    int temp,n,ld,rev=0;
    cin>>n;
    temp=n;
    while(n!=0){
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    if(temp==rev)
    cout<<"It is a palindrome"<<endl;
    else
    cout<<"It is not apalindrome"<<endl;


    return 0;
}