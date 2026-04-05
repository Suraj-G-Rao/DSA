#include<iostream>
using namespace std;
int main(){
    int n;
    char ch;
    cout<<"Enter an int and a char value ";
    

    if(scanf("%d %c",&n,&ch)==2)
    cout<<"Data read successfully";
    else
    cout<<"Error in data input";


    return 0;
}