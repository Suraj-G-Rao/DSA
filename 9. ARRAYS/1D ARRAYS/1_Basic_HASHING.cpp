#include<iostream>
using namespace std;

//int hashh[10000000]; // OUTSIDE THE FOR LOOP WE NEED NOT INITIALIZE WITH 0 
                     // OUTSIDE THE MAIN FUNCTION ARR DOESNT CONTAIN GARBAGE VALUE

int main(){
    int n,i,num,q;
    cin>>n;
    int a[n];

    int hash[100]={0};   // INSIDE MAIN LOOP WE MUST EQUATE IT TO 0 OR 
                             // IT WILL TAKE GARBAGE VALUE 


    for(i=0;i<n;i++){
        cin>>a[i];
        hash[a[i]]+=1;
    }

    cin>>q;

    for(i=0;i<q;i++){
        cout<<"Enter the number to check the frequency";
        cin>>num;
        cout<<hash[num]<<endl;

    }
    
    
    return 0;
}