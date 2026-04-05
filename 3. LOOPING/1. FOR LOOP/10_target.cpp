#include<iostream>
using namespace std;
int main(){
    int a[100000],n,i,flag=0,sum=0;
    cin>>n;
    for(i=1;i>0;i++){
        cin>>a[i];
        flag++;
        sum+=a[i];
        if(sum>=n){
        printf("THE NO. OF TURNS IS %d",flag);
        break;
        }
    }
    
    return 0;
}