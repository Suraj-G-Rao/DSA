// CLEAR THE ith BIT OF A NUMBER

// SAMPLE INPUT  : n=110110   i=3
// SAMPLE OUTPUT : n=110110

// SAMPLE INPUT  : n=110110   i=2
// SAMPLE OUTPUT : n=110010

#include<iostream>
#include<cmath>
using namespace std;
int bin_2_dec(int n){
    int i = 0, ans = 0 ;

    while( n != 0) {

        int digit = n % 10;

        if( digit == 1) {
            ans = ans + pow(2, i);
        }

        n = n/10;
        i++;

    }

    return ans;
}
int dec_2_bin(int n){
    int ans  = 0;
    int i = 0,p=1,bit;
    while(n != 0 ) {

        bit  = n & 1;

        ans = (bit * p ) + ans;

        n = n >> 1;
        p=p*10;
        i++;

    }

    return ans;
}
int main(){
    int n,mask,i;
    
    cout<<"Enter the value of number and position(i) : ";
    cin>>n>>i;
    n=bin_2_dec(n);
    

    mask=1<<i;
    
    // if(n & mask){
    //     n=(n ^ mask);
    // }

    n = (n & (~mask));
    

    cout<<"The Value of n after set is :"<<dec_2_bin(n);
   
     

   
    return 0;
}