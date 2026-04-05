// WAP TO PRINT THIS PATTERN FOR n=5

// 1
// AB
// 123
// ABCD
// 12345

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
         char ch ='A';
       for(j=1;j<=i;j++){
        if(i%2==0){
        cout<<ch;
        ch++;
        }
        else
        cout<<j;
       }
       cout<<endl;
    }


    return 0;
}