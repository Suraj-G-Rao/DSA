/*

COUNT PRIMES WITH TIME COMPLEXITY O(n)

PROBLEM LINK  :  https://leetcode.com/problems/count-primes/description/

SAMPLE INPUT  :  n =10
SAMPLE OUTPUT :  4 (2,3,5,7)

*/
// CHECK NUM IS PRIME WITH TC --> O(N*log(log(N)))
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n,count=0;
//     n=1000000;
//     vector<bool> prime(n+1,true);
//     prime[0]=prime[1]=false;

//     for(int i=2 ; i*i<=n ; i++){
//         if(prime[i]){
//             for(int j=i*i ; j<=n ;j+=i){
//                 prime[j]=false;
//             }
//         }
//     }
//     int a;
//     while(true){
//         cout<<"Enter a Number : ";
//         cin>>a;
//         if(prime[a]) cout<<"Yes prime "<<endl;
//         else         cout<<"No"<<endl;

//     }

//     return 0;
// }


//  TIME COMPLEXITY O(N^2)

// #include<iostream>
// using namespace std;
// int isprime(int n){
//     for(int i=2 ; i<=n/2 ; i++){
//         if((n%i)==0) return 0;
//     }
//     return 1;
// }
// int main(){
//     int n,count=0;
//     cout<<"Enter The Value : ";
//     cin>>n;

//     for(int i=2 ; i<=n ; i++){
//         if(isprime(i))  count++;
//     }
//     cout<<"Total Prime Numbers is "<<count<<endl;

//     return 0;
// }


// TIME COMPLEXITY O(N*log(log(N)))
/*
    (n/2+ n/3 + n/5 + n/7 )  HARMONIC PROGRESSION OF PRIME NUMBERS 
    O(N * log(log(N)))
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter The Value : ";
    cin>>n;
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;

    for(int i=2 ; i<n ; i++){
        if(prime[i]){
            count++;

            for(int j=i*i ; j<n ;j+=i){
                prime[j]=false;
            }
        }
    }
    cout<<"Total Prime Numbers is "<<count<<endl;

    return 0;
}