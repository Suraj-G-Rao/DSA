/*

SUM OF N NATURAL NUMBERS WITH ALTERNATE SIGNS

SAMPLE INPUT  :  N=5
SAMPLE OUTPUT :  3 (1-2+3-4+5)

SAMPLE INPUT  :  N=10
SAMPLE OUTPUT :  -5

*/
#include<iostream>
using namespace std;
int sum_alternate_sign(int n){
    if(n==0) return 0;

    return sum_alternate_sign(n-1) + ((n&1)? n : -1*n);

}
int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Sum Of N Natural No. is : "<<sum_alternate_sign(n);



    return 0;
}