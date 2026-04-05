// PRINT THE BELOW PATTERN FOR n=5
//     1
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,l,a;
    cin>>n;
    for(i=1;i<=n;i++){
        a=i;
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<k;  
        }                            //TO PRINT
        for(l=1;l<=i-1;l++){             //1
            cout<<a-1;                   //2 1
            a--;                         //3 2 1
        }
        
        cout<<endl;
    }


    return 0;
}