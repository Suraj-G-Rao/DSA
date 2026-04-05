/*
SAMPLE INPUT  : [5,10,15,20,25]  abs diff=10
SAMPLE OUTPUT : YES [(5,15) ,(10,20) , (15,25)]

SAMPLE INPUT  : [3,6,8,11,12]  diff=0
SAMPLE OUTPUT : NO  --> WE WONT GET 0 BY subtracting ANY 2 NUMBERS IN THIS ARRAY
*/
#include<iostream>
#include<vector>
using namespace std;
bool Pair_absolute_diff_2(vector<int>&v , int diff){
    int i=0,j=v.size()-1;
    while(i<j){
        if(abs(abs(v[i])-abs(v[j]))==diff) return true;
        else if(abs(abs(v[i])-abs(v[j]))>diff)  j--;
        else i++;
    }
    return false;
}
int main(){
    int n,diff;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    cout<<"Enter The Value Of The diff --> ";
    cin>>diff;

    if(Pair_absolute_diff_2(v,diff)) cout<<"YES";
    else  cout<<"NO";


    return 0;
}