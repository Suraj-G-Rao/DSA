// 1. CHECKING THE GIVE NUM IS PRIME OR NOT

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cin>>n;
//     for(i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"NOT PRIME NO.";
//             exit(0);
//         }
//     }
//     cout<<"PRIME NO.";
//     return 0;
// }


// 2. PRINTING PRIME NUM TILL THE GIVEN NUM 'n'

#include<iostream>
using namespace std;

int main(){
    int n,i,j,a=0;

    cin>>n;

    for(i=2;i<=n;i++){
        a=0;// I was initializing a=0 outside the loop 
        for(j=2;j<i;j++){
            if(i%j==0){
                a=1;
                break;
            }
        }
        if(a==0){
            cout<<i<<" ";
        }
    }


    return 0;
}