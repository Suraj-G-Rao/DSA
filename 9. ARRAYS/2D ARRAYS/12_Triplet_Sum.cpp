/*

PROBLEM LINK  : https://bit.ly/3X34JSI

SAMPLE INPUT  : [-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2]

SAMPLE OUTPUT : [-2 0 2
                 -1-1 2
                  0 0 0]
*/
#include<iostream>
#include<vector>
#include<unordered_set>
#include<set>
#include<algorithm>
using namespace std;
void print_vec(vector<vector<int>> &v){
    for(auto i :v){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
vector<vector<int>> Triplet_Sum_0(vector<int> &v){
    set<vector<int>> s;

    for(int i=0 ; i<v.size() ;i++){
        set<int> hashset;
        for(int j=i+1 ; j<v.size() ;j++){
            int third_ele = -(v[i]+v[j]);
            if(hashset.find(third_ele)!=hashset.end()){
                vector<int> temp={v[i],v[j],third_ele};
                sort(temp.begin(),temp.end());
                s.insert(temp);
            }
            hashset.insert(v[j]);
        }
    }
    vector<vector<int>> ans(s.begin(),s.end());
    return ans;
}
// vector<vector<int>> Triplet_Sum_0(vector<int> &v){  // TC = O(Nlog(N)) + O(N2) SC =O(1) 
//     vector<vector<int>>ans;
//     int n= v.size();
//     sort(v.begin(),v.end());
//     for(int i=0 ; i<n ;i++){
//         if(i>0 && v[i]==v[i-1]) continue;
//         else{
//             int j=i+1,k=n-1;
//             while(j<k){
//                 int sum = v[i]+v[j]+v[k];
//                 if(sum<0){
//                     j++;
//                 }
//                 else if(sum>0){
//                     k--;
//                 }
//                 else{
//                     vector<int> temp ={v[i],v[j],v[k]};
//                     ans.emplace_back(temp);
//                     j++;
//                     k--;
//                     while(j<k && v[j]==v[j+1])  j++;
//                     while(j<k && v[k]==v[k+1])  k--;

//                 }
//             }
//         }
//     }
//     return ans;
// }
int main(){
    int n;
    cout<<"Enter The number of elements : ";
    cin>>n;

    vector<int>v(n);
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++){
       cin>>v[i];
    }
    vector<vector<int>>a(Triplet_Sum_0(v));
    print_vec(a);

    return 0;
}