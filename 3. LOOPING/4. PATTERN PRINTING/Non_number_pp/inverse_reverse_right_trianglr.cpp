// WAP TO PRINT THIS PATTERN
// * * * * *
//   * * * *
//     * * *
//       * *
//         *

#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    int nsp=0;
    int nst=n;

    for(i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){
            cout<<" ";
        }
        for(k=1;k<=nst;k++){
            cout<<"*";
        }
        nsp++;
        nst--;
        cout<<endl;
    }
    return 0;
}