/*

FIRST  :  *ptr++
SECOND :  (*ptr)++
THIRD  :  *++ptr
FOURTH :  ++(*ptr)

*/
#include<iostream>
using namespace std;
int main(){

    // int b=10;
    // int *ptr = &b;

    // cout<<ptr<<" "<<(ptr+1)<<" "<<(ptr+2)<<endl;
    // cout<<ptr<<" "<<(ptr-1)<<endl;

    // ptr+=1;
    // cout<<ptr<<endl;

    int a[2]={4,6};
    int *p = a;

    cout<<p<<" "<<a<<" "<<*p<<" "<<*a<<endl;

    // cout<<*p<<" "<<*p++<<" "<<*p<<endl;

    // cout<<*p<<" "<<endl;
    // cout<<*p++<<" "<<*p<<endl;

    cout<<*p<<" "<<*++p<<" "<<*p<<endl;



    return 0;
}