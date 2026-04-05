#include<iostream>
using namespace std;
int main(){
    int n,i=1,sum=0,avg=0;
    cin>>n;
    do{
        sum+=i;
        avg=sum/n;
        cout<<sum<<" "<<avg<<" "<<endl;
        i++;
    }
    while(i<=n);
    


    return 0;
}