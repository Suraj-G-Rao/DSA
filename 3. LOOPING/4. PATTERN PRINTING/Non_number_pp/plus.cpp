// PLUS PATTERN PRINTING FOR n=9
//     *    
//     *
//     *
//     *
// *********
//     *
//     *
//     *
//     *

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    if(i%2==1){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((j==(n+1)/2)||(i==(n+1)/2))
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    }
    else
    cout<<"NOT POSSIBLE";



    return 0;
}