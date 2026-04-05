// to find the no. of digits 
#include<iostream>
using namespace std;
int main(){
    int n,ld,sum=0;
    cin>>n;
    int digits=0;
    while(n>0){ 
        ld=n%10;
        n=n/10;
        if(digits%2==0){
            sum+=ld;
        }
        digits++;
    }

    cout<<digits<<endl<<sum<<endl;
    
    return 0;
}