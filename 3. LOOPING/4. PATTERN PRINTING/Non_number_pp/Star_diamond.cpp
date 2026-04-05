/*
DIAMOND PATTERN PRINTING FOR n=9
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include<iostream>
using namespace std;
int main(){
    
    int n,i,j,k;
    cout<<"Enter a Odd Number : ";
    cin>>n;
    int nsp=n/2;    //no. of spaces in first line
    int nst=1;      //no. of stars in first line

    
    if(n%2==1){
        for(i=1;i<=n;i++){
            for(j=1;j<=nsp;j++){           //TO PRINT SPACES
                 cout<<" ";
            }
            for(k=1;k<=nst;k++){             //TO PRINT STARS
                   cout<<"*";
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