// WAP to print
//   121212
//   212121 
//   121212
//   212121

#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<endl;
    }



    return 0;
}