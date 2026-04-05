//TO PRINT FIBONACCI SERIES NUMBERS

// SAMPLE INPUT --> 5

// SAMPLE OUTPUT --> 0 1 1 2 3

#include<iostream>
using namespace std;
int main(){
    int n,next;
    cin>>n;
    int prev=0;
    int current=1;
    cout<<prev<<" "<<current<<" ";
    for(int i=1;i<(n-1);i++){
        next= prev+current;
        prev=current;
        current=next;
        cout<<next<<" ";
    }
    return 0;
}

