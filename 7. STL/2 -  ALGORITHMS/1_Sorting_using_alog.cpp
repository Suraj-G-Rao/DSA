#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
// #include<bits/stdc++.h>
using namespace std;
int main(){

    //SORTING FOR ARRAYS

    // array<int,8> a={2,5,2,6,4,9,4,1};

    // cout<<"ARRAY BEFORE SORTING "<<endl;

    // for(int i=0 ; i< a.size() ; i++) cout<<a[i]<<" ";

    // sort(a.begin(),a.end());
    // sort(a.begin()+2,a.end()-2);

    // cout<<endl<<"ARRAY AFTER SORTING "<<endl;


    // for(int i=0 ; i< a.size() ; i++) cout<<a[i]<<" ";

    // SORTING FOR VECTORS 

    vector<int> a={2,5,2,6,4,9,4,1};

    cout<<"VECTOR BEFORE SORTING "<<endl;

    for(int i=0 ; i< a.size() ; i++) cout<<a[i]<<" ";

    sort(a.begin(),a.end());
    sort(a.begin()+2,a.end()-2);

    cout<<endl<<"VECTOR AFTER SORTING "<<endl;


    for(int i=0 ; i< a.size() ; i++) cout<<a[i]<<" ";





    return 0;
}
