#include<iostream>
using namespace std;

// int add(int num1, int num2){
//     int sum=num1 + num2;
//     return sum;
// }
int add(int num1, int num2=9 , int num3){ //Default parameter is compulsary for 3rd variable
    int sum=num1 + num2 + num3;
    return sum;
}

// float add(float num1, float num2){/*it does not execute when use float values at  
//                                    last it gives output as 0*/
//     float sum=num1+num2;
//     return sum;
// }


int main(){
    
    int a=5.6;
    int b=4.4;

    cout<<add(4,5,6)<<endl;

    return 0;
}