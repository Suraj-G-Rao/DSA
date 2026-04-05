/*
Problem Link  :

SAMPLE INPUT  : [1,3,5,3,1,3,1]
SAMPLE OUTPUT : 5

*/
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
int Unique_Element_Out_of_3(vector<int> &v){
    int sum=0;
    for(auto i : v){
        sum+=i;
    }
    return sum%3;
}
int main(){
    int n;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    cout<<"Unique Element is --> "<<Unique_Element_Out_of_3(v)<<endl;

    return 0;
}