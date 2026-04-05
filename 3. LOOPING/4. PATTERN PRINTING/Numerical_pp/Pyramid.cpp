// PRINT THE BELOW PATTERN FOR n=5
//     1
//    123
//   12345
//  1234567
// 123456789

#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=(2*i)-1;k++){
            cout<<k;
        }
        cout<<endl;
    }


    return 0;
}