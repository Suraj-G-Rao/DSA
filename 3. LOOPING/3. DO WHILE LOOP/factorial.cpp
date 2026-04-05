#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int factorial=1,i=1;
    do{
        factorial*=i;
        i++;
    }
    while(i<=n);
    cout<<factorial<<endl;
    return 0;
}