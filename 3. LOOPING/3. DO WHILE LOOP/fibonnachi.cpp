#include<iostream>
using namespace std;
int main(){
    int n,i=0,prev=0,current=1,next;
    cin>>n;
    do{
        if(i<=1)
        cout<<i<<" ";
    
    else{
        next=prev+current;
        cout<<next<<" ";
        prev=current;
        current=next;


    }
    i++;
}
    while(i<n);



    return 0;
}