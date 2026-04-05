/*

MIN PRIME FACTOR

2 IS THE MIN PRIME FACTOR FOR - {4,6,8,10,12......} COUNT - 49999999
3 IS THE MIN PRIME FACTOR FOR - {9,15,21,27.......} COUNT - 16666667
5 IS THE MIN PRIME FACTOR FOR - {25,35,55,.......}  COUNT - 6666667


Enter The Value of n : 1
Total Prime factor Is : 0

Enter The Value of n : 2
Total Prime factor Is : 49999999

Enter The Value of n : 3
Total Prime factor Is : 16666667

Enter The Value of n : 5
Total Prime factor Is : 6666667

Enter The Value of n : 4
Total Prime factor Is : 0

*/
#include<iostream>
#include<vector>
using namespace std;
const int n = 100000000;
int sieve[n+1];

int create_sieve(){
    for (int i = 2; i <= n; i++){
        sieve[i] = 1;
    }
    for(int i=2 ;i*i<=n ; i++){
        if(sieve[i]==1){
            for(int j=i*i ; j<=n ; j+=i){
                if(sieve[j]!=0){
                    sieve[j]=0;
                    sieve[i]++;
                }                
            }
        }
    }

}
int main(){

    create_sieve();
    int num;
    while(true){
        cout<<"Enter The Value of n : ";
        cin>>num;
        cout<<"Total Prime factor Is : "<<sieve[num]<<endl;

    }



    return 0;
}

