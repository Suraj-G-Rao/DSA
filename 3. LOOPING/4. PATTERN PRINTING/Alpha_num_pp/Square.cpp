// WAP TO PRINT THIS PATTERN FOR n=5

// ABCDE
// BCDEF
// CDEFG
// DEFGH
// EFGHI

#include<iostream>
using namespace std;
int main(){
    int i,j,n,a=65;
    cin>>n;
    for(i=65;i<=64+n;i++){
        a=i;
        for(j=65;j<=64+n;j++){
            cout<<char(a);
            a++;
        }
        cout<<'\n';
    }
    return 0;
}
