/*

PROBLEM LINK  : https://bit.ly/3ItlwtJ

SAMPLE INPUT  : [(1,3) (2,6) (8,9) (9,11) (8,10) (2,4) (15,18) (16,17) ]
SAMPLE OUTPUT : [(1,6) (8,11) (15,18)]
*/
#include<iostream>
#include<vector>
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
vector<vector<int>> Merge_Overlapping_Intervals(vector<vector<int>> &v){ // TC = O(Nlog(N))  SC =O(1) 
    vector<vector<int>>ans;
    sort(v.begin(),v.end());
    int min_range=v[0][0] , max_range=v[0][1];
    for(int i=1 ; i<v.size() ; i++){
        if(v[i][0]<=max_range){
            max_range=max(max_range,v[i][1]);
        }
        else{
            ans.push_back({min_range,max_range});
            min_range=v[i][0];
            max_range=v[i][1];
        }
    }
    ans.push_back({min_range,max_range});
    return ans;
}
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
    vector<vector<int>>a(Merge_Overlapping_Intervals(v));
    print_vec(a);

    return 0;
}