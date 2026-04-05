#include<iostream>
using namespace std;
int main(){
    int a=6;
    cout<<"Post increment operation: "<<a++<<endl;
    cout<<(a+2)<<endl;
    a=6;
    cout<<"Pre increment operation: "<<++a<<endl;
    cout<<(a+2)<<endl;
    int b=4;
    cout<<"Post decrement operation: "<<b--<<endl;
    cout<<(b+2)<<endl;
    b=4;
    cout<<"Pre decrement operation: "<<--b<<endl;
    cout<<(b+2)<<endl;
    return 0;
}