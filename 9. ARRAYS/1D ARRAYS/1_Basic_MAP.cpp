#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i,q,num;
    cin>>n;

    int a[n];

    for(i=0 ;i<n;i++){
        cin>>a[i];
    }

    unordered_map<int,int>m; // ALWAYS PREFER UNORDERED_MAP IF O(N) EXCEEDS THEN USE MAP
    // map<int,int>m;

    for(i=0;i<n;i++){
        m[a[i]]++;
    }

    // map<int,int>m;
    // for(i=0 ;i<n;i++){
    //     cin>>a[i];
    //     m[a[i]]++;
    // }
    int sum=0;
    for(auto i :m){
        if(i.second>1){
            sum+=i.first;
        }
    }
    cout<<"Sum = "<<sum<<endl;

    //ITERATING THROUGH THE MAP
    for(auto i :m){
        cout<<i.first<<"-->"<<i.second<<endl;
    }
    
    cin>>q;

    for(i=0;i<q;i++){
        cout<<"Enter the number to check the frequency";
        cin>>num;
        cout<<m[num]<<endl;

    }
    

    return 0;
}