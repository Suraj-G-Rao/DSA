/*
a(v)-->COPY PERFORMED WILL BE DEEP COPY

*/

#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector <int> v={1,2,3,4};

    // TO COPY VECTOR V 
    vector<int> a(v);
    vector<int> b(v.begin(),v.end());

    // TO COPY ONLY FIRST 2 ELE 
    vector<int> c(v.begin(),v.begin()+2);  // --> vec(start , end) end will not be included

    cout<<"Vector a --> ";
    for(int i: a){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Vector b --> ";
    for(int i: b){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Vector c --> ";
    for(int i: c){
        cout<<i<<" ";
    }
    cout<<endl;



    




    return 0;
}