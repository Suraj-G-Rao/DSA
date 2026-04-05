// WAP TO PRINT THE BELOW PATTERN FOR n=4

// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

#include<iostream>
using namespace std;
int main(){
    int i,n,j,k=0,a,b;
    cin>>n;
    for(i=1;i<=(2*n)-1;i++){
        for(j=1;j<=(2*n)-1;j++){
            a=i;
            if(i>n) a=(2*n) -i;
            b=j;
            if(b>n) b=(2*n) -j;
            k= a<b ?a:b;  
            cout<<n+1-k;
        }
        cout<<endl;
    }
    return 0;
}