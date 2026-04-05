// WAP to print
//    1
//   2 2
//  3   3
// 4444444

#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            if(i==1||i==n||j==1||j==2*i-1){
                cout<<i;
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}