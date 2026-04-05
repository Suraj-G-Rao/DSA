#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any key";
    cin>>ch;

    if(isprint(ch)>0)
    cout<<"The user has entered a printable character"<<endl;

    if(isalpha(ch)>0)
    cout<<"The user has entered a character"<<endl;

     if(isdigit(ch)>0)
    cout<<"The user has entered a digit"<<endl;

     if(ispunct(ch)>0)
    cout<<"The user has entered a punctuation mark"<<endl;

     if(isspace(ch)>0)
    cout<<"The user has entered a white space character"<<endl;
    
    return 0;
}