/*
SAMPLE INPUT  : [4,3,2,7,8,2,3,1]
SAMPLE OUTPUT : [2,3]

SAMPLE INPUT  : [1]
SAMPLE OUTPUT : []

SAMPLE INPUT  : [1,1,2]
SAMPLE OUTPUT : [1]

*/


#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,int>m;
        for(int ele :nums){
            m[ele]+=1;
            if(m[ele]==2)  
               v.emplace_back(ele);
        }
        return v;  
}
int main(){ 
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0 ;i<n ;i++){
        cin>>v[i];
    }

    vector<int>a(findDuplicates(v));

    for(int i:a) cout<<i<<" ";

    return 0;
}
