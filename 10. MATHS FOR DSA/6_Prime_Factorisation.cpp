/*

PRIME FACTORISATION

Enter The Value of n  : 48
Total Prime factor Is : 2 2 2 2 3

Enter The Value of n : 5
Total Prime factor Is : 6666667

Enter The Value of n : 4
Total Prime factor Is : 0

*/

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     int n;
//     cout<<"Enter The Number : ";
//     cin>>n;
//     cout<<"Prime Factorization : ";

//     for(int i=2 ; i*i<=n ; i++){
//         while(n%i==0){
//             cout<<i<<' ';
//             n=n/i;
//         }
//     }
//     if(n>1) cout<<n;
//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
const int n = 1000000;
int spf[n+1];

int create_spf(){
    for (int i = 0; i <= n; i++){
        spf[i] = i;
    }
    for(int i=2 ;i*i<=n ; i++){
        if(spf[i]==i){
            for(int j=i*i ; j<=n ; j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }              
            }
        }
    }

}
int main(){

    create_spf();
    int num;
    while(true){
        cout<<"Enter The Value of n : ";
        cin>>num;
        cout<<"Prime Factorization : ";
        while(num!=1){
            cout<<spf[num]<<" ";
            num/=spf[num];
        }
        cout<<endl;
    }



    return 0;
}

