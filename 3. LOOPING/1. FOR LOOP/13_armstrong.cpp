// print all armstrong no. from 1 to 500 
// SAMPLE INPUT : 153 = (1*1*1)+(5*5*5)+(3*3*3)
// SAMPLE OUTPUT: YES

#include<iostream>
using namespace std;
int main(){
    int i,a,b,c,sum=0,temp;

    for(i=1;i<=500;i++){
        temp=i;
       
        a=i%10;
        b=a*a*a;
        c=i/10;
        sum+=b;
        if(sum==i)
        cout<<"Armstrong no.";
        else
        cout<<"Not a Armstrong no.";
    }


    return 0;
}