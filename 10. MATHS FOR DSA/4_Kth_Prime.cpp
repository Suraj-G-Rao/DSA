/*

Kth PRIME NUMBER 

PROBLEM LINK  : https://www.spoj.com/problems/TDKPRIME/

SAMPLE INPUT  : 1
SAMPLE OUTPUT : 2 (2 IS THE 1ST PRIME NUMBER)

SAMPLE INPUT  : 10
SAMPLE OUTPUT : 29 (29 IS THE 10TH PRIME NUMBER)

Size : 86028121
Enter The Value of K : 1
Kth Prime Is : 2

Enter The Value of K : 10
Kth Prime Is : 29

Enter The Value of K : 100
Kth Prime Is : 541

Enter The Value of K : 1000
Kth Prime Is : 7919

Enter The Value of K : 10000
Kth Prime Is : 104729

Enter The Value of K : 100000
Kth Prime Is : 1299709

Enter The Value of K : 1000000
Kth Prime Is : 15485863

*/
#include<iostream>
#include<vector>
using namespace std;
const int n = 100000000;
bool sieve[n+1];

int  size_create_sieve(){
    for (int i = 2; i <= n; i++){
        sieve[i] = true;
    }
    for(int i=2 ;i*i<=n ; i++){
        if(sieve[i]){
            for(int j=i*i ; j<=n ; j+=i){
                sieve[j]=false;
            }
        }
    }
    int limit = 5*1000000;
    int cnt = 0;
    int size = 1;
    for(int i=2;;i++){
        if(sieve[i]){
            cnt++;
        }
        if(cnt==limit){
            size=i;
            break;
        }
    }
    cout<<"Size : "<<size<<endl;
    return size;

}
int main(){

    int a=size_create_sieve();
    int num;
    vector<int> prime;
    for(int i=2;i<=a;i++){
        if(sieve[i]){
            prime.push_back(i);
        }
    }
    while(true){
        cout<<"Enter The Value of K : ";
        cin>>num;
        cout<<"Kth Prime Is : "<<prime[num-1]<<endl;

    }



    return 0;
}

