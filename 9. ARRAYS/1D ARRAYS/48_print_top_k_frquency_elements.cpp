/*

PROBLEM : https://leetcode.com/problems/top-k-frequent-elements/description/


SAMPLE INPUT  : [1,2,2,2,1,3,3,3,3] k=2
SAMPLE OUTPUT : 2,3

*/


// BEST APPROACH
#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
vector<int> print_top_k_occ(vector<int>& a) {
        map<int,int> m;
        for(int i=0;i<a.size();i++){
           m[a[i]]+=1;
        }
        multimap<int,int> q;
        for(auto i : m){
            q.insert({i.second,i.first});
        }

        vector<int> d;
        for(auto i : q){
            d.push_back(i.second);
        }
        return d;
    }
int main(){
    int n,k;
    cin>>n;
    cout<<"Enter the array elements : "<<endl;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter K value : ";
    cin>>k;

    vector<int> d(print_top_k_occ(a));
    int count =0;
    int z= d.size()-1;

    while(count<k){
        cout<<d[z--]<<" ";
        count++;
    }

    return 0;
}

