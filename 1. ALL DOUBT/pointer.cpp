#include<iostream>
using namespace std;
int main(){


    int a[2]={4,6};
    int *p = &a[0];

    // cout<<*p<<" "<<*p++<<" "<<*p<<endl;


    cout<<*p<<" ";
    cout<<*p++<<" "<<*p<<endl;


    return 0;
}