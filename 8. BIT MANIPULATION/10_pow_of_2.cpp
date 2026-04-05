// CHECK THE  NUMBER IS POWER OF 2 OR NOT

// SAMPLE INPUT  : n=16   
// SAMPLE OUTPUT : YES

// SAMPLE INPUT  : n=11 
// SAMPLE OUTPUT : NO
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

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    if((n & n-1)==0) cout<<"Yes The Number is Power of 2 ";
    else             cout<<"No The Number is not Power of 2 ";
                 
   
    return 0;
}