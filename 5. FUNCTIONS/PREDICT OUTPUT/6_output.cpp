#include<iostream>
using namespace std;
void makeTwice(int p){
    p = p * 2;
    cout<<p<<" ";
}
int main(){
    int p = 24;
    makeTwice(p);
    cout<<p<<endl;
}

//OUTPUT --> 48 24
