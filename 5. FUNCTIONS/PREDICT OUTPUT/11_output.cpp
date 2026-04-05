#include<iostream>
using namespace std;
long factorial(long p){
    if (p>1){
    return (p * factorial (p+1));
    }else{
    return (1);
    }
}
int main(){
    long q = 3;
    cout<<q<<" != "<<factorial(q);
    return 0;
}

/*
OPTIONS:
a) 6
b) 24
c) Segmentation fault
d) Compile time error
*/

//OUTPUT --> 3 !=  (Segmentation fault)
