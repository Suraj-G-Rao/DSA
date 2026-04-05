//TO CHECK IF THE GIVEN INPUT IS UPPERCASE OR LOWERCASE OR DIGIT

/*
SAMPLE INPUT 1 --> 10
SAMPLE OUTPUT 1 --> Digit

SAMPLE INPUT 2 --> A
SAMPLE OUTPUT 2 --> Uppercase
*/



#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>=48 && ch<=57){
        cout<<"Digit";
    }else if(ch>=65 && ch<=90){
        cout<<"Uppercase";
    }else if(ch>=97 && ch<=122){
        cout<<"Lowercase";
    }else{
        cout<<"Invalid character";
    }
    return 0;
}