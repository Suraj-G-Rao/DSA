//TO CONVERT CELSIUS TO FAHRENHEIT

// SAMPLE INPUT --> Enter celsius: 0

// SAMPLE OUTPUT --> Fahrenheit: 32F


#include<iostream>
using namespace std;
int main(){
    float c,f;
    cout<<"Enter celsius: ";
    cin>>c;
    f=(c*9/5)+32;
    cout<<"Fahrenheit: "<<f<<"F"<<endl;
    return 0;

}