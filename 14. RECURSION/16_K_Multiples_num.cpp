/*

K MULTIPLES OF N , WHERE K>0

SAMPLE INPUT  :  N=12 K=5
SAMPLE OUTPUT :  12 24 36 48 60

SAMPLE INPUT  :  N=2 K=10
SAMPLE OUTPUT :  2 4 6 8 10 12 14 16 18 20

*/
#include<iostream>
using namespace std;
void k_multiples(int n,int k){
    if(k==0) return ;

    k_multiples(n,k-1);
    cout<<n*k<<" ";

}
int main(){

    int n,k;
    cout<<"Enter n and k values : ";
    cin>>n>>k;
    k_multiples(n,k);



    return 0;
}