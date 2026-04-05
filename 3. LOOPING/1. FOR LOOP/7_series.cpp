// 1. PRINT THE SERIES ->  2 5 9 14 20 27 35.......
#include<iostream>
using namespace std;
int main(){
    int n,i,ans=0;
    cin>>n;
    for(i=2;i<=n+1;i++){
        ans=ans+i;
        cout<<ans<<" ";
    }
    return 0;
}

// 2. PRINT THE SERIES -> 1 9 17 33 49 73 97 129......
#include<iostream>
using namespace std;
int main(){
    int ans=1,n,i,j,a;
    
    cin>>n;
    a=(n+1)/2;
    for(i=1;i<=a;i++){
        for(j=1;j<=n;j++){
            cout<<ans<<" ";
            break;
            }
            ans+=8*i;
             if(n%2!=0 && i==a){
                continue;
            }
            cout<<ans<<" ";
            ans+=8*i;     
        
    }
    return 0;
   

}