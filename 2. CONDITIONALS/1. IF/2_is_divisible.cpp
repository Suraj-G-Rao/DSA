//TO CHECK IF THE DENOMINATOR IS NOT ZERO AND IS DIVISIBLE

/*
SAMPLE INPUT 1 --> 5 3
SAMPLE OUTPUT 1 --> 1.66667

SAMPLE INPUT 2 --> 5 0
SAMPLE OUTPUT 2 --> (WILL PRINT NOTHING)
*/

#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    cin>>num1>>num2;
    if(num2!=0){
        cout<<num1/num2<<endl;
        return 0;
    }
    return 0;
}