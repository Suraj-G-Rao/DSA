/*

PROBLEM LINK  : https://bit.ly/329Le3K

SAMPLE INPUT  : [1,2,3
                 4,5,6
                 7,8,9]

SAMPLE OUTPUT : [1,4,7,8,5,2,3,6,9]  up to down to up to down


*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> Wave_Print(vector<vector<int>> &v){
    vector<int>ans;
    for(int j=0 ; j<v[0].size();j++){
        if(j%2==0){
            for(int i=0 ;i<v.size();i++){
                ans.emplace_back(v[i][j]);
            }
        }
        else{
            for(int i=v.size()-1 ; i>=0 ;i--){
                ans.emplace_back(v[i][j]);
            }
        }
    }
    return ans;
}
// vector<int> Wave_Print(vector<vector<int>> &v){
//     vector<int>ans;
//     int i=0,j=0;
//     while(ans.size()<=(v.size()*v[0].size())-1){
//         if(i<v.size() && j<v[0].size()){
//             ans.emplace_back(v[i][j]);
//         }

//         if(j%2==0 && i<v.size()){
//             i++;
//         }
//         else if(i==v.size()){
//             j++;
//             i--;
//         }
//         else if(i==-1){
//             j++;
//             i++;
//         }
//         else{
//             i--;
//         }
        
//     }
//     return ans;
// }
int main(){
    int n,m;
    cout<<"Enter The size Of rows and columns : ";
    cin>>n>>m;

    vector<vector<int>>v(n,vector<int>(m));
    cout<<"Enter The Elements : ";
    for(int i=0;i<n;i++){
        for(int j=0 ; j<m ;j++){
            cin>>v[i][j];
        }
    }
    vector<int>a(Wave_Print(v));
    for(auto i : a){
        cout<<i<<" ";
    }

    return 0;
}