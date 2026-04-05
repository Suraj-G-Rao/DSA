/*
DIAMOND PATTERN PRINTING FOR n=9
    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A
*/
#include<iostream>
using namespace std;
int main(){
    int i,j,n,a;
    cin>>n;
    for(i=1;i<=2*n-1;i++){
        if(i<=5){
        a=64;
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<char(a+j);
        }
        }
        else{
            a=64;
            for(j=1;j<=i-n;j++){
            cout<<" ";
            }
            for(j=1;j<=2*(2*n-i)-1;j++){
                cout<<char(a+j);
            }
        }
        cout<<endl;
    }

    return 0;
}