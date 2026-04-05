#include<iostream>
using namespace std;
int main(){
    bool a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<(a&&b)<<endl;
    cout<<(a||b)<<endl;
    cout<<(!a)<<endl;
    cout<<(!b)<<endl;
    return 0;
}