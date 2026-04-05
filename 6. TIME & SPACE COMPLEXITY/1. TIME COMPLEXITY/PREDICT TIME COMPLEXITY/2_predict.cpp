#include<iostream>
using namespace std;
int main(){
    int val=0,n;
    for(int i=n; i>0; i/=2){
        for(int j=0; j<i; j++){
            val++;
        }
    }
}

/*
OPTIONS:
a) O(log n)
b) O(n logn)
c) O(n)
d) None
*/

//ANSWER --> O(n)