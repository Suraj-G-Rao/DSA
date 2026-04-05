// WAP TO PRINT THIS PATTERN FOR n=5

//     A
//    123
//   ABCDE
//  1234567
// ABCDEFGHI

#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    char ch;
    cin>>n;
    for(i=1;i<=n;i++){
        ch='A';
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=(2*i)-1;k++){
            if(i%2==0)
              cout<<k;
            
            else{
                cout<<ch;
                ch++;
            }
        }
        cout<<endl;
    }
    return 0;
}
