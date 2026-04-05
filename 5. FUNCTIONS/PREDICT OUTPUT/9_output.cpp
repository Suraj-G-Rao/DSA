#include<iostream>
using namespace std;
int fun(int = 0, int = 0);

int main(){
    cout<<fun(5);
    return 0;
}
int fun(int x, int y){
    return (x+y);
}

/*
OPTIONS:
a) -5
b) 0
c) 10
d) 5
*/

//OUTPUT --> 5
