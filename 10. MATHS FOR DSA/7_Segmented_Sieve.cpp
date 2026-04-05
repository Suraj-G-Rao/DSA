/*

PRINT ALL THE PRIMES BETWEEN L AND R 

EXAMPLE : 110 - 130

Enter l and r : 110 130
113 127 

*/

#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
const int n = 1000000;
bool sieve[n+1];

void create_sieve(){
    for (int i = 2; i <= n; i++){
        sieve[i] = true;
    }
    for(int i=2 ;i*i<=n ; i++){
        if(sieve[i]==true){
            for(int j=i*i ; j<=n ; j+=i){
                sieve[j]=false;           
            }
        }
    }

}
vector<int> generate_primes(int m){
    
    vector<int> ds;
    for(int i=2 ; i<=m ;i++){
        if(sieve[i]) ds.push_back(i);
    }
    return ds;
}
int main(){

    create_sieve();
    int t;
    while(t--){
        int l,r;
        cout<<"Enter l and r : ";
        cin>>l>>r;
        vector<int> prime = generate_primes(sqrt(r));

        int dummy[r-l+1];

        for(int i=0 ; i<r-l+1 ; i++){
            dummy[i]=1;
        }

        for(auto i : prime){
            int firstmultiple = (l/i)*i;
            if(firstmultiple < l)  firstmultiple+=i;

            for(int j=max(firstmultiple,i*i) ;j<=r ; j+=i){
                dummy[j-l]=0;
            }
        }

        for(int i=l ; i<=r ;i++){
            if(dummy[i-l]==1){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}

