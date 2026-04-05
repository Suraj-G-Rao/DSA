// WAP TO PRINT THE BELOW PATTERN FOR n=5

// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1

#include<iostream>
using namespace std;
int main(){
    int n,i,j,a;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
              if((i+j)%2==0)  a=1;
              else  a=0;
              cout<<a<<" ";
            }
        cout<<endl;
    }
    // ALTERNATE METHOD
    
    // for(i=1;i<=n;i++){
    // if(i%2!=0) a=1;
    //     else  a=0;
    //     for(j=1;j<=i;j++){
    //           cout<<a<<" ";
    //           if(a==1)  a=0;
    //           else  a=1;
    //         }
    //     cout<<endl;
    // }
    return 0;
}