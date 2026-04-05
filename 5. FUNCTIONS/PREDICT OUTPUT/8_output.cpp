#include<iostream>
using namespace std;
int fun(int x = 0, int y = 0, int z){
    return (x+y+z);
}
int main(){
    cout<<fun(10);
    return 0;
}

/*
OPTIONS:
a) 10
b) 0
c) Error
d) Segmentation Fault
*/

//OUTPUT --> error: default argument missing for parameter 3 of 'int fun(int, int, int)'