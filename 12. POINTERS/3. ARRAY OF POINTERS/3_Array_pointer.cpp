#include<iostream>
using namespace std;
int main(){

    int a[3]={3,6,7};
    int (*p)[3] = &a; // --> IT WILL BE STORING THE ADDRESS OF EACH ELEMENT OF 'a'
    // int* p[3]      // --> BOTH SYNTAX ARE SAME

    cout<<p<<" "<<a<<" "<<*p<<" "<<*a<<endl;


    return 0;
}