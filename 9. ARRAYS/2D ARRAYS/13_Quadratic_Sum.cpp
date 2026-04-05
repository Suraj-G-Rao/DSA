/*

PROBLEM LINK  : https://bit.ly/3It5SyP

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
vector<vector<int>> Quadratic_Sum(vector<int> &v,int target){  
    set<vector<int>> s;
    for(int i=0 ; i<v.size() ; i++){
        for(int j=i+1 ; j<v.size() ; j++){
            set<int> hashset;
            for(int k=j+1 ; k<v.size() ;k++){
                int quad = target - (v[i]+v[j]+v[k]);
                if(hashset.find(quad)!=hashset.end()){
                    vector<int> temp = {v[i],v[j],v[k],quad};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                }
                hashset.insert(v[k]);
            }
        }
    }
    vector<vector<int>> ans(s.begin(),s.end());
    return ans;
}
// vector<vector<int>> Quadratic_Sum(vector<int> &v,int target){  
//     vector<vector<int>> ans;
//     sort(v.begin(),v.end());
//     for(int i=0 ; i<v.size(); i++){
//         if(i>0  && v[i]==v[i-1])  continue;
//         for(int j=i+1; j<v.size();j++){
//             if(j>i+1  && v[j]==v[j-1])  continue;
//             else{
//                 int k=j+1,l=v.size()-1;
//                 while(k<l){
//                     int sum=v[i]+v[j]+v[k]+v[l];
//                     if(sum>target){
//                         l--;
//                     }
//                     else if(sum<target){
//                         k++;
//                     }
//                     else{
//                         vector<int>temp = {v[i],v[j],v[k],v[l]};
//                         ans.emplace_back(temp);
//                         k++;
//                         l--;
                    
//                     while(k<l && v[k]==v[k-1]) k++;
//                     while(k<l && v[l]==v[l+1]) l--;
//                     }
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
    int target;
    cout<<"Enter The Traget Sum Value : ";
    cin>>target;
    vector<vector<int>>a(Quadratic_Sum(v,target));
    print_vec(a);

    return 0;
}