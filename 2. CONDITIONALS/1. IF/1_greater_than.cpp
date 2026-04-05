//TO CHECK IF a IS GREATER THAN b

/*
SAMPLE INPUT 1 --> 7 4
SAMPLE OUTPUT 2 --> 7 is greater than 4

SAMPLE INPUT 2 --> 4 7
SAMPLE OUTPUT 2 --> (WILL PRINT NOTHING)
*/




#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is greater than "<<b<<endl;
    }
    return 0;
}