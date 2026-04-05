// COUNT THE NUMBER OF SET BIT

// SAMPLE INPUT  : n=1101   
// SAMPLE OUTPUT : 3

// SAMPLE INPUT  : n=1100 
// SAMPLE OUTPUT : 2

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

    int n,count=0;
    cout<<"Enter the value of n : ";
    cin>>n;

    n=bin_2_dec(n);

    // HERE LOOP RUNS 4 TIMES FOR 1100 --> O(4N)

    // while(n){
    //     if(n&1){
    //         count++;
    //     }
    //     n=n>>1;
    // }

    // HERE LOOP RUNS 2 TIMES FOR 1100 --> O(2N)

    while(n){
        n= n & n-1;
        count++;
    }

    cout<<"Total Number Of Set Bit is "<<count;

    
                 
   
    return 0;
}

// SOLVE Y IT IS NOT WORKING
// #include<iostream>
// using namespace std;
// int setbits(int a)
// {
//     int i=0;
//     while(a!=0)
//     {
//     if(a|0)  // IT WILL AFFECT ALL THE BITS BECOZ OF OR SO THE LOOP EXECUTES ALL THE TIME
//     {
//         i++;
//     }
//     a=a>>1;
//     }
//     return i;
// }
// int main()
// {
//     int a,b,c,d;
//     cin>>a;
//     c=setbits(a);
//     cout<<"the number of set bits in "<<a<<"is "<<c;

// }