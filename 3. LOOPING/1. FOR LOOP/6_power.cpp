// WAP TO PRINT POWER OF A NUMBER

// SAMPLE INPUT  : 2,3
// SAMPLE OUTPUT : 8 (2*2*2)

#include<iostream>
using namespace std;
int main(){
    int i,power=1,b,n;
    cout<<"Enter the base"<<endl;
    cin>>b;
    cout<<"Enter the power of the base"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        power=power*b;
    }
    cout<<power;

    return 0;
}