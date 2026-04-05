#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i=0;
    cin>>n;
    while(i<=n/2){
        if(pow(2,i)==n){
            cout<<"true";
            return 0;
        }
        i++;
    }
    cout<<"false";
    return 0;
}