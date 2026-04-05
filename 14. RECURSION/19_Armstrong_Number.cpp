/*

ARMSTRONG NUMBER : IT IS NUMBER IF THE SUM OF EVERY DIGIT IN THE NUMBER RAISED 
                   TO THE POWER OF TOTAL DIGITS

SAMPLE INPUT  :  N=153 
SAMPLE OUTPUT :  YES ( 1^3 + 5^3 + 3^3 = 153 )

SAMPLE INPUT  :  N=1634
SAMPLE OUTPUT :  YES ( 1^4 + 6^4 + 3^4 +4^4 = 1634 )

SAMPLE INPUT  :  N=27
SAMPLE OUTPUT :  NO  (2^2 + 7^2 != 27)

*/
#include<iostream>
using namespace std;
int digits(int n){
    if(n==0) return 0;
    return digits(n/10)+1;
}
int power(int a, int b){
    if(b==0) return 1;

    int res = power(a,b/2);

    if(b&1) return res*res*a;
    else    return res*res;
}
int armstrong(int n,int d){

    if(n==0) return 0;

    return power(n%10,d) +  armstrong(n/10,d);
}
int main(){

    int n;
    cout<<"Enter the value of n  : ";
    cin>>n;
    if(n==armstrong(n,digits(n)))  cout<<"yes";
    else                        cout<<"no";



    return 0;
}