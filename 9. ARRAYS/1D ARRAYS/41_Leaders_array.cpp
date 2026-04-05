/*
Problem Link: https://bit.ly/3QiQ830 

SAMPLE INPUT  : [1,2,2,1]  
SAMPLE OUTPUT : [1,2]


EXPLANATION :

Element present at the last index is '1' and is a superior element since there are no integers to the right of it.
Element present at index 2 (0-indexed) is '2' and is greater than all the elements to the right of it.
There are no other superior elements present in the array.
Hence the final answer is [1,2].

*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void print_vec(vector<int> &v){
    for(auto i :v) cout<<i<<" ";
}
vector<int> superiorElements(vector<int>&a) {

    vector<int> ans;
    int maxi = INT_MIN;
    for(int i=a.size()-1 ; i>=0 ; i--){
        if(a[i]>maxi){
            maxi=a[i];
            ans.emplace_back(maxi);
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter The Number Of Elements : ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++) cin>>v[i];

    vector<int> a(superiorElements(v));
    print_vec(a);



    return 0;
}