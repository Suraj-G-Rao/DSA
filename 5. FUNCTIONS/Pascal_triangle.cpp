#include<iostream>
using namespace std;
int f,i,c;

int fact(int n){
    int f=1;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

int combination(int n , int r){
    c= fact(n)/(fact(r)*fact(n-r));
    return c;
}

int main(){
    int n,i,j,c,k;
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
            c=combination(i,j);
            cout<<c<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}