#include<iostream>
using namespace std;
int a=10;
int main(){
    int a=5;

    cout<<::a<<endl;  // :: is used print the global value of a
    cout<<a<<endl;
    
return 0;
}