// SAMPLE INPUT : n=5  1 2 3 4 5
// SAMPLE OUTPUT :     2 1 4 3 5

// SAMPLE INPUT : n=6  1 2 3 4 5 6
// SAMPLE OUTPUT :     2 1 4 3 6 5

#include<iostream>
using namespace std;

int main(){
    int n,a[100],i;

    cin>>n;
    for(i=0;i<n;i++) cin>>a[i];

    for(i=0;i<n;i+=2){
        if(i+1<n) swap(a[i],a[i+1]);
    }

    for(i=0;i<n;i++) cout<<a[i]<<" ";

    
    return 0;
}