// WAP TO PRINT THIS PATTERN
//* * * * * * *
//* * *   * * *
//* *       * *
//*           *

#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,m;
    cin>>m;
    n=m-1;
    int nsp=1;
    int nst=n;
    for(i=1;i<=2*n+1;i++){
        cout<<"*";
    }
    cout<<endl;
    for(i=1;i<=n;i++){
        for(k=1;k<=nst;k++){
            cout<<"*";
        }
          for(j=1;j<=nsp;j++){
            cout<<" ";
        }
        
         for(k=1;k<=nst;k++){
            cout<<"*";
        }
        nst--;
        nsp+=2;
        cout<<endl;
    }
    return 0;
}