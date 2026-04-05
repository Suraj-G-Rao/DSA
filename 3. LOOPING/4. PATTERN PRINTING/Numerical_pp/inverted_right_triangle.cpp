// PRINT THE BELOW PATTERN FOR n=5

// 12345
// 1234
// 123
// 12
// 1


#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}