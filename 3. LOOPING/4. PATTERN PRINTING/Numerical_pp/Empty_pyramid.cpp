// WAP TO PRINT THIS PATTERN IF n=4
//1 2 3 4 5 6 7
//1 2 3   5 6 7
//1 2       6 7
//1           7

#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,m,a;
    cin>>m;
    n=m-1;
    int nsp=1;
    int nst=n;
    for(i=1;i<=2*n+1;i++){
        cout<<i;
    }
    cout<<endl;
    for(i=1;i<=n;i++){
        a=1;
        for(k=1;k<=nst;k++){
            cout<<a;
            a++;
        }
          for(j=1;j<=nsp;j++){
            cout<<" ";
            a++;
        }
        
         for(k=1;k<=nst;k++){
            cout<<a;
            a++;
        }
        nst--;
        nsp+=2;
        cout<<endl;
    }
    return 0;
}