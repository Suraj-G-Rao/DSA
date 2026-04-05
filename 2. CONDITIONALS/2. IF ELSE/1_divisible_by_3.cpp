// TO CHECK IF THE GIVEN NUMBER IS EVEN AND IS DIVISIBLE BY 3

/*
SAMPLE INPUT 1:
Enter n: 6

SAMPLE OUTPUT 1 --> The number is even and divisible by 3

SAMPLE INPUT 2:
Enter n: 15

SAMPLE OUTPUT 2 --> Enter a valid number
*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(n%2==0 && n%3==0){
        cout<<"The number is even and divisible by 3";
    }else{
        cout<<"Enter a valid number";
    }
    return 0;
}