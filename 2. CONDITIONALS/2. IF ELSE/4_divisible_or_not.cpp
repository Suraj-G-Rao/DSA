//TO CHECK IF THE NUMBER IS DIVISIBLE OR NOT

/*
SAMPLE INPUT 1:
Enter the first number: 6
Enter the second number: 3

SAMPLE OUTPUT 1 --> 2

SAMPLE INPUT 2:
Enter the first number: 2
Enter the second number: 0

SAMPLE OUTPUT 2 --> Divide by zero not allowed
*/

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    if(num2!=0){
        cout<<num1/num2;
    }else{
        cout<<"Divide by zero not allowed";
    }
    return 0;
}


