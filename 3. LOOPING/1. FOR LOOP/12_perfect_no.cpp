#include<iostream>
using namespace std;
int main(){
    int i,n,a,sum=0,temp;
    cin>>n;
    temp=n;
    for(i=1;i<n;i++){
        if(n%i==0)
        sum+=i;
    }
    if(temp==sum)
    cout<<"perfect number";
    else
    cout<<"not a perfect number";
    return 0;
}