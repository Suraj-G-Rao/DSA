// WAP TO PRINT THIS PATTERN FOR n=4

//    A
//   ABA
//  ABCBA
// ABCDCBA

#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,a;
    char ch;
    cin>>n;
    for(i=1;i<=n;i++){
        ch='A';
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }
        a=i-1;
        for(j=1;j<=i-1;j++){
            ch=a+64;
            cout<<ch;
            a--;
          
        }
        cout<<endl;
    }



    return 0;
}