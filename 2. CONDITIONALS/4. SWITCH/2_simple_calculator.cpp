//TO CREATE A SIMPLE CALCULATOR

/*
SAMPLE INPUT:
Enter the numbers to be operated: 4 5
Enter an operator: *

SAMPLE OUTPUT:
Product is: 20
*/

#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter the numbers to be operated: ";
    cin>>a>>b;
    cout<<"Enter an operator: ";
    cin>>op;
    switch(op){
        case '+': cout<<"Sum is: "<<a+b;
                  break;
        case '-': cout<<"Difference is: "<<a-b;
                  break;
        case '*': cout<<"Product is: "<<a*b;
                  break;
        case '/': if(b>0){
                    cout<<"Quotient is: "<<a/b;
        }else{
            cout<<"Divide by zero not allowed";
        }
                  break;
        case '%': cout<<"Remainder is: "<<a%b;
        default: cout<<"Invalid operator";
    }

    return 0;
}
