//TO CHECK IF THE NUMBER IS DIVISIBLE BY EITHER 3 OR 5

// SAMPLE INPUT 1 --> Enter n: 9
// SAMPLE OUTPUT 1 --> Number is divisible

// SAMPLE INPUT 2 --> Enter n: 14
// SAMPLE OUTPUT 2 --> Enter a valid number


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(n%3==0 || n%5==0){
        cout<<"Number is divisible";
    }else{
        cout<<"Enter a valid number";
    }
    return 0;
}