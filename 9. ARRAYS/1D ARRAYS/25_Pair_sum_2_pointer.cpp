/*
SAMPLE INPUT  : [-2,-1,0,3,6,8,11,12]  x=14
SAMPLE OUTPUT : YES  2 PAIRS [(6,8) , (3,11)]

SAMPLE INPUT  : [0,3,6,6,8,8,11,12]  x=14
SAMPLE OUTPUT : YES  3 PAIRS [(6,8) ,(6,8) , (3,11)]

SAMPLE INPUT  : [3,6,8,11,12]  sum=16
SAMPLE OUTPUT : NO   0 PAIRS--> WE WONT GET 16 BY ADDING ANY 2 NUMBERS IN THIS ARRAY
*/
#include<iostream>
#include<vector>
using namespace std;
int Pair_sum_2(vector<int>&v , int sum){
    int i=0,j=v.size()-1,c=0;
    while(i<j){
        if(v[i]+v[j]==sum){
            c++;
            i++;
            j--;
        }
        else if(v[i]+v[j]>sum)  j--;
        else i++;
    }
    return c;
}
int main(){
    int n,sum,a;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    cout<<"Enter The Value Of The Sum --> ";
    cin>>sum;

    if(a=Pair_sum_2(v,sum)) cout<<"YES "<<a<<"Pairs";
    else  cout<<"NO"<<a<<"Pairs";


    return 0;
}