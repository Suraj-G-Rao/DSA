//TO CHECK THE MAXIMUM OF 3 NUMBERS

/*
SAMPLE INPUT:
Enter a: 34
Enter b: 29
Enter c: 50

SAMPLE OUTPUT --> 50 is greater
*/

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    if(a>b&&a>c){
        cout<<a<<" is greater"<<endl;
    }else if(b>a&&b>c){
        cout<<b<<" is greater"<<endl;
    }else{
        cout<<c<<" is greater"<<endl;
    }
    return 0;
}