// PRINT THE BELOW PATTERN FOR n=5
// 1
// 13
// 135
// 1357
// 13579

#include<iostream>
using namespace std;
int main(){
    int n,i,j,a=1;
    cin>>n;
    for(i=1;i<=n;i++){
        a=1;
        for(j=1;j<=i;j++){
            cout<<a;
             a+=2;
        }
        cout<<endl;
    }




    return 0;
}