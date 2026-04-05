// WAP TO PRINT THIS PATTERN FOR n=4
//A B C D E F G
//A B C   E F G
//A B       F G
//A           G

#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,m;
    char a='A';
    cin>>m;
    n=m-1;
    int nsp=1;
    int nst=n;
    for(i=1;i<=2*n+1;i++){
        cout<<a;
        a++;
    }
    cout<<endl;
    for(i=1;i<=n;i++){
        a='A';
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