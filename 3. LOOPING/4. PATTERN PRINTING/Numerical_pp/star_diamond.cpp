// WAP TO PRINT THE BELOW PATTERN FOR n=9

//     1
//    123
//   12345
//  1234567
// 123456789
//  1234567
//   12345
//    123
//     1

#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cin>>n;
    int nsp=n/2;    //no. of spaces in first line
    int nst=1;      //no. of stars in first line
    
    
    if(n%2==1){
        for(i=1;i<=n;i++){
           
            for(j=1;j<=nsp;j++){           //TO PRINT SPACES
                 cout<<" ";
            }
            for(k=1;k<=nst;k++){             //TO PRINT STARS
                   cout<<k;
            }
             if(i<=n/2){
                nsp--;
                nst+=2;
            }
            else{
                nsp++;
                nst-=2;
            }
            cout<<endl;
        }
    }
    else
        cout<<"Immpossible";
    return 0;
}