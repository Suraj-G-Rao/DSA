// REMOVE THE LAST SET BIT OF A NUMBER

// SAMPLE INPUT  : n=110110   
// SAMPLE OUTPUT : n=110100

// SAMPLE INPUT  : n=110000  
// SAMPLE OUTPUT : n=100000
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

    n=bin_2_dec(n);
    cout<<dec_2_bin(n & n-1)<<endl;

    // int mask=1;
    // int temp= n ;

    // while(true){

    //     if(temp&1){
    //         cout<<dec_2_bin(n ^ mask);
    //         break;
    //     }

    //     mask=mask<<1;
    //     temp=temp>>1;
    // }
   
    return 0;
}